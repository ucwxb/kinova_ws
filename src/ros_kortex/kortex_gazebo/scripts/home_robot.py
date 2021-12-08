#!/usr/bin/env python3

import sys
import time
import rospy
from std_srvs.srv import Empty
from kortex_driver.msg import ActionNotification, ActionEvent,CartesianSpeed,ConstrainedPose,ActionType
from kortex_driver.srv import ReadAction, ReadActionRequest, ExecuteAction, ExecuteActionRequest
import math
class ExampleInitializeGazeboRobot(object):
    def __init__(self):
        # Initialize the node
        self.HOME_ACTION_IDENTIFIER = 2
        self.last_action_notif_type = None

        try:
            self.robot_name = rospy.get_param('~robot_name')
            self.action_topic_sub = rospy.Subscriber("/" + self.robot_name + "/action_topic", ActionNotification, self.cb_action_topic)

            # Wait for the driver to be initialised
            while not rospy.has_param("/" + self.robot_name + "/is_initialized"):
                time.sleep(0.1)
            
            # Init the services
            read_action_full_name = '/' + self.robot_name + '/base/read_action'
            rospy.wait_for_service(read_action_full_name)
            self.read_action = rospy.ServiceProxy(read_action_full_name, ReadAction)

            execute_action_full_name = '/' + self.robot_name + '/base/execute_action'
            rospy.wait_for_service(execute_action_full_name)
            self.execute_action = rospy.ServiceProxy(execute_action_full_name, ExecuteAction)
        except rospy.ROSException as e:
            self.is_init_success = False
        else:
            self.is_init_success = True

    def cb_action_topic(self, notif):
        self.last_action_notif_type = notif.action_event

    def wait_for_action_end_or_abort(self):
        while not rospy.is_shutdown():
            if (self.last_action_notif_type == ActionEvent.ACTION_END):
                rospy.loginfo("Received ACTION_END notification")
                return True
            elif (self.last_action_notif_type == ActionEvent.ACTION_ABORT):
                rospy.loginfo("Received ACTION_ABORT notification")
                return False
            else:
                time.sleep(0.01)

    def move_around(self):
        success = True
        # Prepare and send pose 1
        my_cartesian_speed = CartesianSpeed()
        my_cartesian_speed.translation = 0.1 # m/s
        my_cartesian_speed.orientation = 15  # deg/s

        my_constrained_pose = ConstrainedPose()
        my_constrained_pose.constraint.oneof_type.speed.append(my_cartesian_speed)

        my_constrained_pose.target_pose.x = 0.5
        my_constrained_pose.target_pose.y = 0.5
        my_constrained_pose.target_pose.z = 0.450
        my_constrained_pose.target_pose.theta_x = 90
        my_constrained_pose.target_pose.theta_y = 0
        my_constrained_pose.target_pose.theta_z = 90

        req = ExecuteActionRequest()
        req.input.oneof_action_parameters.reach_pose.append(my_constrained_pose)
        req.input.name = "pose1"
        req.input.handle.action_type = ActionType.REACH_POSE
        req.input.handle.identifier = 1001

        rospy.loginfo("Sending pose 1...")
        self.last_action_notif_type = None
        try:
            self.execute_action(req)
        except rospy.ServiceException:
            rospy.logerr("Failed to send pose 1")
            success = False
        else:
            rospy.loginfo("Waiting for pose 1 to finish...")

        success = self.wait_for_action_end_or_abort()


        # Prepare and send pose 2
        my_cartesian_speed = CartesianSpeed()
        my_cartesian_speed.translation = 0.05 # m/s
        my_cartesian_speed.orientation = 15  # deg/s

        my_constrained_pose = ConstrainedPose()
        my_constrained_pose.constraint.oneof_type.speed.append(my_cartesian_speed)

        req.input.handle.identifier = 1002
        req.input.name = "pose2"

        my_constrained_pose.target_pose.x = 0.5
        my_constrained_pose.target_pose.y = -0.5
        my_constrained_pose.target_pose.z = 0.450
        my_constrained_pose.target_pose.theta_x = 90
        my_constrained_pose.target_pose.theta_y = 0
        my_constrained_pose.target_pose.theta_z = 90

        req.input.oneof_action_parameters.reach_pose[0] = my_constrained_pose

        rospy.loginfo("Sending pose 2...")
        self.last_action_notif_type = None
        try:
            self.execute_action(req)
        except rospy.ServiceException:
            rospy.logerr("Failed to send pose 2")
            success = False
        else:
            rospy.loginfo("Waiting for pose 2 to finish...")

        success = self.wait_for_action_end_or_abort()
        # Prepare and send pose 3
        my_cartesian_speed = CartesianSpeed()
        my_cartesian_speed.translation = 0.05 # m/s
        my_cartesian_speed.orientation = 15  # deg/s

        my_constrained_pose = ConstrainedPose()
        my_constrained_pose.constraint.oneof_type.speed.append(my_cartesian_speed)

        req.input.handle.identifier = 1003
        req.input.name = "pose3"

        my_constrained_pose.target_pose.x = 0.5
        my_constrained_pose.target_pose.y = 0.5
        my_constrained_pose.target_pose.z = 0.550
        my_constrained_pose.target_pose.theta_x = 90
        my_constrained_pose.target_pose.theta_y = 30
        my_constrained_pose.target_pose.theta_z = 90

        req.input.oneof_action_parameters.reach_pose[0] = my_constrained_pose

        rospy.loginfo("Sending pose 3...")
        self.last_action_notif_type = None
        try:
            self.execute_action(req)
        except rospy.ServiceException:
            rospy.logerr("Failed to send pose 3")
            success = False
        else:
            rospy.loginfo("Waiting for pose 3 to finish...")

        success = self.wait_for_action_end_or_abort()

        # Prepare and send pose 4
        my_cartesian_speed = CartesianSpeed()
        my_cartesian_speed.translation = 0.05 # m/s
        my_cartesian_speed.orientation = 15  # deg/s

        my_constrained_pose = ConstrainedPose()
        my_constrained_pose.constraint.oneof_type.speed.append(my_cartesian_speed)

        req.input.handle.identifier = 1004
        req.input.name = "pose4"

        my_constrained_pose.target_pose.x = 0.5
        my_constrained_pose.target_pose.y = -0.5
        my_constrained_pose.target_pose.z = 0.600
        my_constrained_pose.target_pose.theta_x = 90
        my_constrained_pose.target_pose.theta_y = 45
        my_constrained_pose.target_pose.theta_z = 90

        req.input.oneof_action_parameters.reach_pose[0] = my_constrained_pose

        rospy.loginfo("Sending pose 4...")
        self.last_action_notif_type = None
        try:
            self.execute_action(req)
        except rospy.ServiceException:
            rospy.logerr("Failed to send pose 4")
            success = False
        else:
            rospy.loginfo("Waiting for pose 4 to finish...")

        success = self.wait_for_action_end_or_abort()
        return success

    def home_the_robot(self):
        # The Home Action is used to home the robot. It cannot be deleted and is always ID #2:
        self.last_action_notif_type = None
        req = ReadActionRequest()
        req.input.identifier = self.HOME_ACTION_IDENTIFIER

        try:
            res = self.read_action(req) 
        except rospy.ServiceException:
            rospy.logerr("Failed to call ReadAction")
            return False
        # Execute the HOME action if we could read it
        else:
        # What we just read is the input of the ExecuteAction service
            req = ExecuteActionRequest()
            req.input = res.output
            rospy.loginfo("Sending the robot home...")
        try:
            self.execute_action(req)
        except rospy.ServiceException:
            rospy.logerr("Failed to call ExecuteAction")
            return False
        else:
            return self.wait_for_action_end_or_abort()

 

def main():
    try:
        # For testing purposes
        try:
            rospy.delete_param("is_initialized")
        except:
            pass

        # Unpause the physics
        rospy.loginfo("Unpausing Gazebo...")
        rospy.wait_for_service('/gazebo/unpause_physics')
        unpause_gazebo = rospy.ServiceProxy('/gazebo/unpause_physics', Empty)
        resp = unpause_gazebo()
        rospy.loginfo("Unpaused Gazebo.")

        example = ExampleInitializeGazeboRobot()
        success = example.is_init_success
        if success:
            pass
            success &= example.home_the_robot()
            success &= example.move_around()

    except Exception as e:
        print (e)
        success = False

    # For testing purposes
    rospy.set_param("is_initialized", success)
    if not success:
        rospy.logerr("The Gazebo initialization encountered an error.")
    else:
        rospy.loginfo("The Gazebo initialization executed without fail.")

if __name__ == '__main__':
    rospy.init_node('init_robot')
    main()
