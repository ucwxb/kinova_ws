
"use strict";

let ActivateMap = require('./ActivateMap.js')
let AddSequenceTasks = require('./AddSequenceTasks.js')
let AddWifiConfiguration = require('./AddWifiConfiguration.js')
let ApplyEmergencyStop = require('./ApplyEmergencyStop.js')
let Base_ClearFaults = require('./Base_ClearFaults.js')
let Base_GetCapSenseConfig = require('./Base_GetCapSenseConfig.js')
let Base_GetControlMode = require('./Base_GetControlMode.js')
let Base_OnNotificationControlModeTopic = require('./Base_OnNotificationControlModeTopic.js')
let Base_SetCapSenseConfig = require('./Base_SetCapSenseConfig.js')
let Base_Unsubscribe = require('./Base_Unsubscribe.js')
let ChangePassword = require('./ChangePassword.js')
let ComputeForwardKinematics = require('./ComputeForwardKinematics.js')
let ComputeInverseKinematics = require('./ComputeInverseKinematics.js')
let ConnectWifi = require('./ConnectWifi.js')
let CreateAction = require('./CreateAction.js')
let CreateMapping = require('./CreateMapping.js')
let CreateProtectionZone = require('./CreateProtectionZone.js')
let CreateSequence = require('./CreateSequence.js')
let CreateUserProfile = require('./CreateUserProfile.js')
let DeleteAction = require('./DeleteAction.js')
let DeleteAllSequenceTasks = require('./DeleteAllSequenceTasks.js')
let DeleteMap = require('./DeleteMap.js')
let DeleteMapping = require('./DeleteMapping.js')
let DeleteProtectionZone = require('./DeleteProtectionZone.js')
let DeleteSequence = require('./DeleteSequence.js')
let DeleteSequenceTask = require('./DeleteSequenceTask.js')
let DeleteUserProfile = require('./DeleteUserProfile.js')
let DeleteWifiConfiguration = require('./DeleteWifiConfiguration.js')
let DisableBridge = require('./DisableBridge.js')
let DisconnectWifi = require('./DisconnectWifi.js')
let DuplicateMapping = require('./DuplicateMapping.js')
let EnableBridge = require('./EnableBridge.js')
let ExecuteAction = require('./ExecuteAction.js')
let ExecuteActionFromReference = require('./ExecuteActionFromReference.js')
let ExecuteWaypointTrajectory = require('./ExecuteWaypointTrajectory.js')
let GetActuatorCount = require('./GetActuatorCount.js')
let GetAllConfiguredWifis = require('./GetAllConfiguredWifis.js')
let GetAllConnectedControllers = require('./GetAllConnectedControllers.js')
let GetAllControllerConfigurations = require('./GetAllControllerConfigurations.js')
let GetAllJointsSpeedHardLimitation = require('./GetAllJointsSpeedHardLimitation.js')
let GetAllJointsSpeedSoftLimitation = require('./GetAllJointsSpeedSoftLimitation.js')
let GetAllJointsTorqueHardLimitation = require('./GetAllJointsTorqueHardLimitation.js')
let GetAllJointsTorqueSoftLimitation = require('./GetAllJointsTorqueSoftLimitation.js')
let GetArmState = require('./GetArmState.js')
let GetBridgeConfig = require('./GetBridgeConfig.js')
let GetBridgeList = require('./GetBridgeList.js')
let GetConfiguredWifi = require('./GetConfiguredWifi.js')
let GetConnectedWifiInformation = require('./GetConnectedWifiInformation.js')
let GetControllerConfiguration = require('./GetControllerConfiguration.js')
let GetControllerConfigurationMode = require('./GetControllerConfigurationMode.js')
let GetControllerState = require('./GetControllerState.js')
let GetFirmwareBundleVersions = require('./GetFirmwareBundleVersions.js')
let GetIPv4Configuration = require('./GetIPv4Configuration.js')
let GetIPv4Information = require('./GetIPv4Information.js')
let GetMeasuredCartesianPose = require('./GetMeasuredCartesianPose.js')
let GetMeasuredGripperMovement = require('./GetMeasuredGripperMovement.js')
let GetMeasuredJointAngles = require('./GetMeasuredJointAngles.js')
let GetOperatingMode = require('./GetOperatingMode.js')
let CreateMap = require('./CreateMap.js')
let DuplicateMap = require('./DuplicateMap.js')
let GetAvailableWifi = require('./GetAvailableWifi.js')
let GetProductConfiguration = require('./GetProductConfiguration.js')
let OnNotificationFactoryTopic = require('./OnNotificationFactoryTopic.js')
let PlayJointTrajectory = require('./PlayJointTrajectory.js')
let ReadSequence = require('./ReadSequence.js')
let SetAdmittance = require('./SetAdmittance.js')
let GetServoingMode = require('./GetServoingMode.js')
let GetTrajectoryErrorReport = require('./GetTrajectoryErrorReport.js')
let GetTwistHardLimitation = require('./GetTwistHardLimitation.js')
let GetTwistSoftLimitation = require('./GetTwistSoftLimitation.js')
let GetWifiCountryCode = require('./GetWifiCountryCode.js')
let GetWifiInformation = require('./GetWifiInformation.js')
let GetWrenchHardLimitation = require('./GetWrenchHardLimitation.js')
let GetWrenchSoftLimitation = require('./GetWrenchSoftLimitation.js')
let IsCommunicationInterfaceEnable = require('./IsCommunicationInterfaceEnable.js')
let MoveSequenceTask = require('./MoveSequenceTask.js')
let OnNotificationActionTopic = require('./OnNotificationActionTopic.js')
let OnNotificationArmStateTopic = require('./OnNotificationArmStateTopic.js')
let OnNotificationConfigurationChangeTopic = require('./OnNotificationConfigurationChangeTopic.js')
let OnNotificationControllerTopic = require('./OnNotificationControllerTopic.js')
let OnNotificationMappingInfoTopic = require('./OnNotificationMappingInfoTopic.js')
let OnNotificationNetworkTopic = require('./OnNotificationNetworkTopic.js')
let OnNotificationOperatingModeTopic = require('./OnNotificationOperatingModeTopic.js')
let OnNotificationProtectionZoneTopic = require('./OnNotificationProtectionZoneTopic.js')
let OnNotificationRobotEventTopic = require('./OnNotificationRobotEventTopic.js')
let OnNotificationSequenceInfoTopic = require('./OnNotificationSequenceInfoTopic.js')
let OnNotificationServoingModeTopic = require('./OnNotificationServoingModeTopic.js')
let OnNotificationUserTopic = require('./OnNotificationUserTopic.js')
let PauseAction = require('./PauseAction.js')
let PauseSequence = require('./PauseSequence.js')
let PlayAdvancedSequence = require('./PlayAdvancedSequence.js')
let PlayCartesianTrajectory = require('./PlayCartesianTrajectory.js')
let PlayCartesianTrajectoryOrientation = require('./PlayCartesianTrajectoryOrientation.js')
let PlayCartesianTrajectoryPosition = require('./PlayCartesianTrajectoryPosition.js')
let PlayPreComputedJointTrajectory = require('./PlayPreComputedJointTrajectory.js')
let PlaySelectedJointTrajectory = require('./PlaySelectedJointTrajectory.js')
let PlaySequence = require('./PlaySequence.js')
let ReadAction = require('./ReadAction.js')
let ReadAllActions = require('./ReadAllActions.js')
let ReadAllMappings = require('./ReadAllMappings.js')
let ReadAllMaps = require('./ReadAllMaps.js')
let ReadAllProtectionZones = require('./ReadAllProtectionZones.js')
let ReadAllSequences = require('./ReadAllSequences.js')
let ReadAllSequenceTasks = require('./ReadAllSequenceTasks.js')
let ReadAllUserProfiles = require('./ReadAllUserProfiles.js')
let ReadAllUsers = require('./ReadAllUsers.js')
let ReadMap = require('./ReadMap.js')
let ReadMapping = require('./ReadMapping.js')
let ReadProtectionZone = require('./ReadProtectionZone.js')
let ReadSequenceTask = require('./ReadSequenceTask.js')
let ReadUserProfile = require('./ReadUserProfile.js')
let RestoreFactoryProductConfiguration = require('./RestoreFactoryProductConfiguration.js')
let RestoreFactorySettings = require('./RestoreFactorySettings.js')
let ResumeAction = require('./ResumeAction.js')
let ResumeSequence = require('./ResumeSequence.js')
let SendGripperCommand = require('./SendGripperCommand.js')
let SendJointSpeedsCommand = require('./SendJointSpeedsCommand.js')
let SendJointSpeedsJoystickCommand = require('./SendJointSpeedsJoystickCommand.js')
let SendSelectedJointSpeedCommand = require('./SendSelectedJointSpeedCommand.js')
let SendSelectedJointSpeedJoystickCommand = require('./SendSelectedJointSpeedJoystickCommand.js')
let SendTwistCommand = require('./SendTwistCommand.js')
let SendTwistJoystickCommand = require('./SendTwistJoystickCommand.js')
let SendWrenchCommand = require('./SendWrenchCommand.js')
let SendWrenchJoystickCommand = require('./SendWrenchJoystickCommand.js')
let SetCommunicationInterfaceEnable = require('./SetCommunicationInterfaceEnable.js')
let SetControllerConfiguration = require('./SetControllerConfiguration.js')
let SetControllerConfigurationMode = require('./SetControllerConfigurationMode.js')
let SetIPv4Configuration = require('./SetIPv4Configuration.js')
let SetOperatingMode = require('./SetOperatingMode.js')
let SetServoingMode = require('./SetServoingMode.js')
let SetWifiCountryCode = require('./SetWifiCountryCode.js')
let StartTeaching = require('./StartTeaching.js')
let StartWifiScan = require('./StartWifiScan.js')
let Stop = require('./Stop.js')
let StopAction = require('./StopAction.js')
let StopSequence = require('./StopSequence.js')
let StopTeaching = require('./StopTeaching.js')
let SwapSequenceTasks = require('./SwapSequenceTasks.js')
let TakeSnapshot = require('./TakeSnapshot.js')
let UpdateAction = require('./UpdateAction.js')
let UpdateEndEffectorTypeConfiguration = require('./UpdateEndEffectorTypeConfiguration.js')
let UpdateMap = require('./UpdateMap.js')
let UpdateMapping = require('./UpdateMapping.js')
let UpdateProtectionZone = require('./UpdateProtectionZone.js')
let UpdateSequence = require('./UpdateSequence.js')
let UpdateSequenceTask = require('./UpdateSequenceTask.js')
let UpdateUserProfile = require('./UpdateUserProfile.js')
let ValidateWaypointList = require('./ValidateWaypointList.js')

module.exports = {
  ActivateMap: ActivateMap,
  AddSequenceTasks: AddSequenceTasks,
  AddWifiConfiguration: AddWifiConfiguration,
  ApplyEmergencyStop: ApplyEmergencyStop,
  Base_ClearFaults: Base_ClearFaults,
  Base_GetCapSenseConfig: Base_GetCapSenseConfig,
  Base_GetControlMode: Base_GetControlMode,
  Base_OnNotificationControlModeTopic: Base_OnNotificationControlModeTopic,
  Base_SetCapSenseConfig: Base_SetCapSenseConfig,
  Base_Unsubscribe: Base_Unsubscribe,
  ChangePassword: ChangePassword,
  ComputeForwardKinematics: ComputeForwardKinematics,
  ComputeInverseKinematics: ComputeInverseKinematics,
  ConnectWifi: ConnectWifi,
  CreateAction: CreateAction,
  CreateMapping: CreateMapping,
  CreateProtectionZone: CreateProtectionZone,
  CreateSequence: CreateSequence,
  CreateUserProfile: CreateUserProfile,
  DeleteAction: DeleteAction,
  DeleteAllSequenceTasks: DeleteAllSequenceTasks,
  DeleteMap: DeleteMap,
  DeleteMapping: DeleteMapping,
  DeleteProtectionZone: DeleteProtectionZone,
  DeleteSequence: DeleteSequence,
  DeleteSequenceTask: DeleteSequenceTask,
  DeleteUserProfile: DeleteUserProfile,
  DeleteWifiConfiguration: DeleteWifiConfiguration,
  DisableBridge: DisableBridge,
  DisconnectWifi: DisconnectWifi,
  DuplicateMapping: DuplicateMapping,
  EnableBridge: EnableBridge,
  ExecuteAction: ExecuteAction,
  ExecuteActionFromReference: ExecuteActionFromReference,
  ExecuteWaypointTrajectory: ExecuteWaypointTrajectory,
  GetActuatorCount: GetActuatorCount,
  GetAllConfiguredWifis: GetAllConfiguredWifis,
  GetAllConnectedControllers: GetAllConnectedControllers,
  GetAllControllerConfigurations: GetAllControllerConfigurations,
  GetAllJointsSpeedHardLimitation: GetAllJointsSpeedHardLimitation,
  GetAllJointsSpeedSoftLimitation: GetAllJointsSpeedSoftLimitation,
  GetAllJointsTorqueHardLimitation: GetAllJointsTorqueHardLimitation,
  GetAllJointsTorqueSoftLimitation: GetAllJointsTorqueSoftLimitation,
  GetArmState: GetArmState,
  GetBridgeConfig: GetBridgeConfig,
  GetBridgeList: GetBridgeList,
  GetConfiguredWifi: GetConfiguredWifi,
  GetConnectedWifiInformation: GetConnectedWifiInformation,
  GetControllerConfiguration: GetControllerConfiguration,
  GetControllerConfigurationMode: GetControllerConfigurationMode,
  GetControllerState: GetControllerState,
  GetFirmwareBundleVersions: GetFirmwareBundleVersions,
  GetIPv4Configuration: GetIPv4Configuration,
  GetIPv4Information: GetIPv4Information,
  GetMeasuredCartesianPose: GetMeasuredCartesianPose,
  GetMeasuredGripperMovement: GetMeasuredGripperMovement,
  GetMeasuredJointAngles: GetMeasuredJointAngles,
  GetOperatingMode: GetOperatingMode,
  CreateMap: CreateMap,
  DuplicateMap: DuplicateMap,
  GetAvailableWifi: GetAvailableWifi,
  GetProductConfiguration: GetProductConfiguration,
  OnNotificationFactoryTopic: OnNotificationFactoryTopic,
  PlayJointTrajectory: PlayJointTrajectory,
  ReadSequence: ReadSequence,
  SetAdmittance: SetAdmittance,
  GetServoingMode: GetServoingMode,
  GetTrajectoryErrorReport: GetTrajectoryErrorReport,
  GetTwistHardLimitation: GetTwistHardLimitation,
  GetTwistSoftLimitation: GetTwistSoftLimitation,
  GetWifiCountryCode: GetWifiCountryCode,
  GetWifiInformation: GetWifiInformation,
  GetWrenchHardLimitation: GetWrenchHardLimitation,
  GetWrenchSoftLimitation: GetWrenchSoftLimitation,
  IsCommunicationInterfaceEnable: IsCommunicationInterfaceEnable,
  MoveSequenceTask: MoveSequenceTask,
  OnNotificationActionTopic: OnNotificationActionTopic,
  OnNotificationArmStateTopic: OnNotificationArmStateTopic,
  OnNotificationConfigurationChangeTopic: OnNotificationConfigurationChangeTopic,
  OnNotificationControllerTopic: OnNotificationControllerTopic,
  OnNotificationMappingInfoTopic: OnNotificationMappingInfoTopic,
  OnNotificationNetworkTopic: OnNotificationNetworkTopic,
  OnNotificationOperatingModeTopic: OnNotificationOperatingModeTopic,
  OnNotificationProtectionZoneTopic: OnNotificationProtectionZoneTopic,
  OnNotificationRobotEventTopic: OnNotificationRobotEventTopic,
  OnNotificationSequenceInfoTopic: OnNotificationSequenceInfoTopic,
  OnNotificationServoingModeTopic: OnNotificationServoingModeTopic,
  OnNotificationUserTopic: OnNotificationUserTopic,
  PauseAction: PauseAction,
  PauseSequence: PauseSequence,
  PlayAdvancedSequence: PlayAdvancedSequence,
  PlayCartesianTrajectory: PlayCartesianTrajectory,
  PlayCartesianTrajectoryOrientation: PlayCartesianTrajectoryOrientation,
  PlayCartesianTrajectoryPosition: PlayCartesianTrajectoryPosition,
  PlayPreComputedJointTrajectory: PlayPreComputedJointTrajectory,
  PlaySelectedJointTrajectory: PlaySelectedJointTrajectory,
  PlaySequence: PlaySequence,
  ReadAction: ReadAction,
  ReadAllActions: ReadAllActions,
  ReadAllMappings: ReadAllMappings,
  ReadAllMaps: ReadAllMaps,
  ReadAllProtectionZones: ReadAllProtectionZones,
  ReadAllSequences: ReadAllSequences,
  ReadAllSequenceTasks: ReadAllSequenceTasks,
  ReadAllUserProfiles: ReadAllUserProfiles,
  ReadAllUsers: ReadAllUsers,
  ReadMap: ReadMap,
  ReadMapping: ReadMapping,
  ReadProtectionZone: ReadProtectionZone,
  ReadSequenceTask: ReadSequenceTask,
  ReadUserProfile: ReadUserProfile,
  RestoreFactoryProductConfiguration: RestoreFactoryProductConfiguration,
  RestoreFactorySettings: RestoreFactorySettings,
  ResumeAction: ResumeAction,
  ResumeSequence: ResumeSequence,
  SendGripperCommand: SendGripperCommand,
  SendJointSpeedsCommand: SendJointSpeedsCommand,
  SendJointSpeedsJoystickCommand: SendJointSpeedsJoystickCommand,
  SendSelectedJointSpeedCommand: SendSelectedJointSpeedCommand,
  SendSelectedJointSpeedJoystickCommand: SendSelectedJointSpeedJoystickCommand,
  SendTwistCommand: SendTwistCommand,
  SendTwistJoystickCommand: SendTwistJoystickCommand,
  SendWrenchCommand: SendWrenchCommand,
  SendWrenchJoystickCommand: SendWrenchJoystickCommand,
  SetCommunicationInterfaceEnable: SetCommunicationInterfaceEnable,
  SetControllerConfiguration: SetControllerConfiguration,
  SetControllerConfigurationMode: SetControllerConfigurationMode,
  SetIPv4Configuration: SetIPv4Configuration,
  SetOperatingMode: SetOperatingMode,
  SetServoingMode: SetServoingMode,
  SetWifiCountryCode: SetWifiCountryCode,
  StartTeaching: StartTeaching,
  StartWifiScan: StartWifiScan,
  Stop: Stop,
  StopAction: StopAction,
  StopSequence: StopSequence,
  StopTeaching: StopTeaching,
  SwapSequenceTasks: SwapSequenceTasks,
  TakeSnapshot: TakeSnapshot,
  UpdateAction: UpdateAction,
  UpdateEndEffectorTypeConfiguration: UpdateEndEffectorTypeConfiguration,
  UpdateMap: UpdateMap,
  UpdateMapping: UpdateMapping,
  UpdateProtectionZone: UpdateProtectionZone,
  UpdateSequence: UpdateSequence,
  UpdateSequenceTask: UpdateSequenceTask,
  UpdateUserProfile: UpdateUserProfile,
  ValidateWaypointList: ValidateWaypointList,
};
