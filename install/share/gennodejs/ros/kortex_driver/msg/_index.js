
"use strict";

let ApiOptions = require('./ApiOptions.js');
let KortexError = require('./KortexError.js');
let ErrorCodes = require('./ErrorCodes.js');
let SubErrorCodes = require('./SubErrorCodes.js');
let ActuatorConfig_ControlMode = require('./ActuatorConfig_ControlMode.js');
let ActuatorConfig_ControlModeInformation = require('./ActuatorConfig_ControlModeInformation.js');
let ActuatorConfig_SafetyLimitType = require('./ActuatorConfig_SafetyLimitType.js');
let ActuatorConfig_ServiceVersion = require('./ActuatorConfig_ServiceVersion.js');
let AxisOffsets = require('./AxisOffsets.js');
let AxisPosition = require('./AxisPosition.js');
let CoggingFeedforwardMode = require('./CoggingFeedforwardMode.js');
let CoggingFeedforwardModeInformation = require('./CoggingFeedforwardModeInformation.js');
let CommandMode = require('./CommandMode.js');
let CommandModeInformation = require('./CommandModeInformation.js');
let ControlLoop = require('./ControlLoop.js');
let ControlLoopParameters = require('./ControlLoopParameters.js');
let ControlLoopSelection = require('./ControlLoopSelection.js');
let CustomDataIndex = require('./CustomDataIndex.js');
let CustomDataSelection = require('./CustomDataSelection.js');
let EncoderDerivativeParameters = require('./EncoderDerivativeParameters.js');
let FrequencyResponse = require('./FrequencyResponse.js');
let LoopSelection = require('./LoopSelection.js');
let PositionCommand = require('./PositionCommand.js');
let RampResponse = require('./RampResponse.js');
let SafetyIdentifierBankA = require('./SafetyIdentifierBankA.js');
let Servoing = require('./Servoing.js');
let StepResponse = require('./StepResponse.js');
let TorqueCalibration = require('./TorqueCalibration.js');
let TorqueOffset = require('./TorqueOffset.js');
let VectorDriveParameters = require('./VectorDriveParameters.js');
let ActuatorCyclic_Command = require('./ActuatorCyclic_Command.js');
let ActuatorCyclic_CustomData = require('./ActuatorCyclic_CustomData.js');
let ActuatorCyclic_Feedback = require('./ActuatorCyclic_Feedback.js');
let ActuatorCyclic_MessageId = require('./ActuatorCyclic_MessageId.js');
let ActuatorCyclic_ServiceVersion = require('./ActuatorCyclic_ServiceVersion.js');
let CommandFlags = require('./CommandFlags.js');
let StatusFlags = require('./StatusFlags.js');
let Action = require('./Action.js');
let ActionEvent = require('./ActionEvent.js');
let ActionExecutionState = require('./ActionExecutionState.js');
let ActionHandle = require('./ActionHandle.js');
let ActionList = require('./ActionList.js');
let ActionNotification = require('./ActionNotification.js');
let ActionNotificationList = require('./ActionNotificationList.js');
let ActionType = require('./ActionType.js');
let Action_action_parameters = require('./Action_action_parameters.js');
let ActivateMapHandle = require('./ActivateMapHandle.js');
let ActuatorInformation = require('./ActuatorInformation.js');
let Admittance = require('./Admittance.js');
let AdmittanceMode = require('./AdmittanceMode.js');
let AdvancedSequenceHandle = require('./AdvancedSequenceHandle.js');
let AngularWaypoint = require('./AngularWaypoint.js');
let ArmStateInformation = require('./ArmStateInformation.js');
let ArmStateNotification = require('./ArmStateNotification.js');
let BackupEvent = require('./BackupEvent.js');
let Base_CapSenseConfig = require('./Base_CapSenseConfig.js');
let Base_CapSenseMode = require('./Base_CapSenseMode.js');
let Base_ControlMode = require('./Base_ControlMode.js');
let Base_ControlModeInformation = require('./Base_ControlModeInformation.js');
let Base_ControlModeNotification = require('./Base_ControlModeNotification.js');
let Base_GpioConfiguration = require('./Base_GpioConfiguration.js');
let Base_JointSpeeds = require('./Base_JointSpeeds.js');
let Base_Position = require('./Base_Position.js');
let Base_RotationMatrix = require('./Base_RotationMatrix.js');
let Base_RotationMatrixRow = require('./Base_RotationMatrixRow.js');
let Base_SafetyIdentifier = require('./Base_SafetyIdentifier.js');
let Base_ServiceVersion = require('./Base_ServiceVersion.js');
let BridgeConfig = require('./BridgeConfig.js');
let BridgeIdentifier = require('./BridgeIdentifier.js');
let BridgeList = require('./BridgeList.js');
let BridgePortConfig = require('./BridgePortConfig.js');
let BridgeResult = require('./BridgeResult.js');
let BridgeStatus = require('./BridgeStatus.js');
let BridgeType = require('./BridgeType.js');
let CartesianLimitation = require('./CartesianLimitation.js');
let CartesianLimitationList = require('./CartesianLimitationList.js');
let CartesianSpeed = require('./CartesianSpeed.js');
let CartesianTrajectoryConstraint = require('./CartesianTrajectoryConstraint.js');
let CartesianTrajectoryConstraint_type = require('./CartesianTrajectoryConstraint_type.js');
let CartesianWaypoint = require('./CartesianWaypoint.js');
let ChangeJointSpeeds = require('./ChangeJointSpeeds.js');
let ChangeWrench = require('./ChangeWrench.js');
let CommunicationInterfaceConfiguration = require('./CommunicationInterfaceConfiguration.js');
let ConfigurationChangeNotification = require('./ConfigurationChangeNotification.js');
let ConfigurationChangeNotificationList = require('./ConfigurationChangeNotificationList.js');
let ConfigurationChangeNotification_configuration_change = require('./ConfigurationChangeNotification_configuration_change.js');
let ConfigurationNotificationEvent = require('./ConfigurationNotificationEvent.js');
let ConstrainedJointAngle = require('./ConstrainedJointAngle.js');
let ConstrainedJointAngles = require('./ConstrainedJointAngles.js');
let ConstrainedOrientation = require('./ConstrainedOrientation.js');
let ConstrainedPose = require('./ConstrainedPose.js');
let ConstrainedPosition = require('./ConstrainedPosition.js');
let ControllerBehavior = require('./ControllerBehavior.js');
let ControllerConfiguration = require('./ControllerConfiguration.js');
let ControllerConfigurationList = require('./ControllerConfigurationList.js');
let AppendActionInformation = require('./AppendActionInformation.js');
let Base_Stop = require('./Base_Stop.js');
let ChangeTwist = require('./ChangeTwist.js');
let ControllerConfigurationMode = require('./ControllerConfigurationMode.js');
let Delay = require('./Delay.js');
let GpioPinConfiguration = require('./GpioPinConfiguration.js');
let JointTrajectoryConstraint = require('./JointTrajectoryConstraint.js');
let MappingInfoNotificationList = require('./MappingInfoNotificationList.js');
let PreComputedJointTrajectory = require('./PreComputedJointTrajectory.js');
let Sequence = require('./Sequence.js');
let ServoingModeNotificationList = require('./ServoingModeNotificationList.js');
let TransformationMatrix = require('./TransformationMatrix.js');
let ControllerElementEventType = require('./ControllerElementEventType.js');
let ControllerElementHandle = require('./ControllerElementHandle.js');
let ControllerElementHandle_identifier = require('./ControllerElementHandle_identifier.js');
let ControllerElementState = require('./ControllerElementState.js');
let ControllerEvent = require('./ControllerEvent.js');
let ControllerEventType = require('./ControllerEventType.js');
let ControllerHandle = require('./ControllerHandle.js');
let ControllerInputType = require('./ControllerInputType.js');
let ControllerList = require('./ControllerList.js');
let ControllerNotification = require('./ControllerNotification.js');
let ControllerNotificationList = require('./ControllerNotificationList.js');
let ControllerNotification_state = require('./ControllerNotification_state.js');
let ControllerState = require('./ControllerState.js');
let ControllerType = require('./ControllerType.js');
let ControlModeNotificationList = require('./ControlModeNotificationList.js');
let EmergencyStop = require('./EmergencyStop.js');
let EventIdSequenceInfoNotification = require('./EventIdSequenceInfoNotification.js');
let FactoryEvent = require('./FactoryEvent.js');
let FactoryNotification = require('./FactoryNotification.js');
let Faults = require('./Faults.js');
let Finger = require('./Finger.js');
let FirmwareBundleVersions = require('./FirmwareBundleVersions.js');
let FirmwareComponentVersion = require('./FirmwareComponentVersion.js');
let FullIPv4Configuration = require('./FullIPv4Configuration.js');
let FullUserProfile = require('./FullUserProfile.js');
let Gen3GpioPinId = require('./Gen3GpioPinId.js');
let GpioAction = require('./GpioAction.js');
let GpioBehavior = require('./GpioBehavior.js');
let GpioCommand = require('./GpioCommand.js');
let GpioConfigurationList = require('./GpioConfigurationList.js');
let GpioEvent = require('./GpioEvent.js');
let GpioPinPropertyFlags = require('./GpioPinPropertyFlags.js');
let Gripper = require('./Gripper.js');
let GripperCommand = require('./GripperCommand.js');
let GripperMode = require('./GripperMode.js');
let GripperRequest = require('./GripperRequest.js');
let IKData = require('./IKData.js');
let IPv4Configuration = require('./IPv4Configuration.js');
let IPv4Information = require('./IPv4Information.js');
let JointAngle = require('./JointAngle.js');
let JointAngles = require('./JointAngles.js');
let JointLimitation = require('./JointLimitation.js');
let JointNavigationDirection = require('./JointNavigationDirection.js');
let JointsLimitationsList = require('./JointsLimitationsList.js');
let JointSpeed = require('./JointSpeed.js');
let JointTorque = require('./JointTorque.js');
let JointTorques = require('./JointTorques.js');
let JointTrajectoryConstraintType = require('./JointTrajectoryConstraintType.js');
let KinematicTrajectoryConstraints = require('./KinematicTrajectoryConstraints.js');
let LedState = require('./LedState.js');
let LimitationType = require('./LimitationType.js');
let Map = require('./Map.js');
let MapElement = require('./MapElement.js');
let MapEvent = require('./MapEvent.js');
let MapEvent_events = require('./MapEvent_events.js');
let MapGroup = require('./MapGroup.js');
let MapGroupHandle = require('./MapGroupHandle.js');
let MapGroupList = require('./MapGroupList.js');
let MapHandle = require('./MapHandle.js');
let MapList = require('./MapList.js');
let Mapping = require('./Mapping.js');
let MappingHandle = require('./MappingHandle.js');
let MappingInfoNotification = require('./MappingInfoNotification.js');
let MappingList = require('./MappingList.js');
let NavigationDirection = require('./NavigationDirection.js');
let NetworkEvent = require('./NetworkEvent.js');
let NetworkHandle = require('./NetworkHandle.js');
let NetworkNotification = require('./NetworkNotification.js');
let NetworkNotificationList = require('./NetworkNotificationList.js');
let NetworkType = require('./NetworkType.js');
let OperatingMode = require('./OperatingMode.js');
let OperatingModeInformation = require('./OperatingModeInformation.js');
let OperatingModeNotification = require('./OperatingModeNotification.js');
let OperatingModeNotificationList = require('./OperatingModeNotificationList.js');
let Orientation = require('./Orientation.js');
let PasswordChange = require('./PasswordChange.js');
let Point = require('./Point.js');
let Pose = require('./Pose.js');
let PreComputedJointTrajectoryElement = require('./PreComputedJointTrajectoryElement.js');
let ProtectionZone = require('./ProtectionZone.js');
let ProtectionZoneEvent = require('./ProtectionZoneEvent.js');
let ProtectionZoneHandle = require('./ProtectionZoneHandle.js');
let ProtectionZoneInformation = require('./ProtectionZoneInformation.js');
let ProtectionZoneList = require('./ProtectionZoneList.js');
let ProtectionZoneNotification = require('./ProtectionZoneNotification.js');
let ProtectionZoneNotificationList = require('./ProtectionZoneNotificationList.js');
let Query = require('./Query.js');
let RequestedActionType = require('./RequestedActionType.js');
let RobotEvent = require('./RobotEvent.js');
let RobotEventNotification = require('./RobotEventNotification.js');
let RobotEventNotificationList = require('./RobotEventNotificationList.js');
let SafetyEvent = require('./SafetyEvent.js');
let SafetyNotificationList = require('./SafetyNotificationList.js');
let SequenceHandle = require('./SequenceHandle.js');
let SequenceInfoNotification = require('./SequenceInfoNotification.js');
let SequenceInfoNotificationList = require('./SequenceInfoNotificationList.js');
let SequenceInformation = require('./SequenceInformation.js');
let SequenceList = require('./SequenceList.js');
let SequenceTask = require('./SequenceTask.js');
let SequenceTaskConfiguration = require('./SequenceTaskConfiguration.js');
let SequenceTaskHandle = require('./SequenceTaskHandle.js');
let SequenceTasks = require('./SequenceTasks.js');
let SequenceTasksConfiguration = require('./SequenceTasksConfiguration.js');
let SequenceTasksPair = require('./SequenceTasksPair.js');
let SequenceTasksRange = require('./SequenceTasksRange.js');
let ServoingMode = require('./ServoingMode.js');
let ServoingModeInformation = require('./ServoingModeInformation.js');
let ServoingModeNotification = require('./ServoingModeNotification.js');
let ShapeType = require('./ShapeType.js');
let SignalQuality = require('./SignalQuality.js');
let Snapshot = require('./Snapshot.js');
let SnapshotType = require('./SnapshotType.js');
let SoundType = require('./SoundType.js');
let Ssid = require('./Ssid.js');
let SwitchControlMapping = require('./SwitchControlMapping.js');
let SystemTime = require('./SystemTime.js');
let Timeout = require('./Timeout.js');
let TrajectoryContinuityMode = require('./TrajectoryContinuityMode.js');
let TrajectoryErrorElement = require('./TrajectoryErrorElement.js');
let TrajectoryErrorIdentifier = require('./TrajectoryErrorIdentifier.js');
let TrajectoryErrorReport = require('./TrajectoryErrorReport.js');
let TrajectoryErrorType = require('./TrajectoryErrorType.js');
let TrajectoryInfo = require('./TrajectoryInfo.js');
let TrajectoryInfoType = require('./TrajectoryInfoType.js');
let TransformationRow = require('./TransformationRow.js');
let Twist = require('./Twist.js');
let TwistCommand = require('./TwistCommand.js');
let TwistLimitation = require('./TwistLimitation.js');
let UserEvent = require('./UserEvent.js');
let UserList = require('./UserList.js');
let UserNotification = require('./UserNotification.js');
let UserNotificationList = require('./UserNotificationList.js');
let UserProfile = require('./UserProfile.js');
let UserProfileList = require('./UserProfileList.js');
let Waypoint = require('./Waypoint.js');
let WaypointList = require('./WaypointList.js');
let WaypointValidationReport = require('./WaypointValidationReport.js');
let Waypoint_type_of_waypoint = require('./Waypoint_type_of_waypoint.js');
let WifiConfiguration = require('./WifiConfiguration.js');
let WifiConfigurationList = require('./WifiConfigurationList.js');
let WifiEncryptionType = require('./WifiEncryptionType.js');
let WifiInformation = require('./WifiInformation.js');
let WifiInformationList = require('./WifiInformationList.js');
let WifiSecurityType = require('./WifiSecurityType.js');
let Wrench = require('./Wrench.js');
let WrenchCommand = require('./WrenchCommand.js');
let WrenchLimitation = require('./WrenchLimitation.js');
let WrenchMode = require('./WrenchMode.js');
let WristDigitalInputIdentifier = require('./WristDigitalInputIdentifier.js');
let Xbox360AnalogInputIdentifier = require('./Xbox360AnalogInputIdentifier.js');
let Xbox360DigitalInputIdentifier = require('./Xbox360DigitalInputIdentifier.js');
let ZoneShape = require('./ZoneShape.js');
let ActuatorCommand = require('./ActuatorCommand.js');
let ActuatorCustomData = require('./ActuatorCustomData.js');
let ActuatorFeedback = require('./ActuatorFeedback.js');
let BaseCyclic_Command = require('./BaseCyclic_Command.js');
let BaseCyclic_CustomData = require('./BaseCyclic_CustomData.js');
let BaseCyclic_Feedback = require('./BaseCyclic_Feedback.js');
let BaseCyclic_ServiceVersion = require('./BaseCyclic_ServiceVersion.js');
let BaseFeedback = require('./BaseFeedback.js');
let ArmState = require('./ArmState.js');
let CartesianReferenceFrame = require('./CartesianReferenceFrame.js');
let Connection = require('./Connection.js');
let CountryCode = require('./CountryCode.js');
let CountryCodeIdentifier = require('./CountryCodeIdentifier.js');
let DeviceHandle = require('./DeviceHandle.js');
let DeviceTypes = require('./DeviceTypes.js');
let Empty = require('./Empty.js');
let NotificationHandle = require('./NotificationHandle.js');
let NotificationOptions = require('./NotificationOptions.js');
let NotificationType = require('./NotificationType.js');
let Permission = require('./Permission.js');
let SafetyHandle = require('./SafetyHandle.js');
let SafetyNotification = require('./SafetyNotification.js');
let SafetyStatusValue = require('./SafetyStatusValue.js');
let Timestamp = require('./Timestamp.js');
let UARTConfiguration = require('./UARTConfiguration.js');
let UARTDeviceIdentification = require('./UARTDeviceIdentification.js');
let UARTParity = require('./UARTParity.js');
let UARTSpeed = require('./UARTSpeed.js');
let UARTStopBits = require('./UARTStopBits.js');
let UARTWordLength = require('./UARTWordLength.js');
let Unit = require('./Unit.js');
let UserProfileHandle = require('./UserProfileHandle.js');
let AngularTwist = require('./AngularTwist.js');
let CartesianReferenceFrameInfo = require('./CartesianReferenceFrameInfo.js');
let CartesianTransform = require('./CartesianTransform.js');
let ControlConfigurationEvent = require('./ControlConfigurationEvent.js');
let ControlConfigurationNotification = require('./ControlConfigurationNotification.js');
let ControlConfig_ControlMode = require('./ControlConfig_ControlMode.js');
let ControlConfig_ControlModeInformation = require('./ControlConfig_ControlModeInformation.js');
let ControlConfig_ControlModeNotification = require('./ControlConfig_ControlModeNotification.js');
let ControlConfig_JointSpeeds = require('./ControlConfig_JointSpeeds.js');
let ControlConfig_Position = require('./ControlConfig_Position.js');
let ControlConfig_ServiceVersion = require('./ControlConfig_ServiceVersion.js');
let DesiredSpeeds = require('./DesiredSpeeds.js');
let GravityVector = require('./GravityVector.js');
let JointAccelerationSoftLimits = require('./JointAccelerationSoftLimits.js');
let JointSpeedSoftLimits = require('./JointSpeedSoftLimits.js');
let KinematicLimits = require('./KinematicLimits.js');
let KinematicLimitsList = require('./KinematicLimitsList.js');
let LinearTwist = require('./LinearTwist.js');
let PayloadInformation = require('./PayloadInformation.js');
let ToolConfiguration = require('./ToolConfiguration.js');
let TwistAngularSoftLimit = require('./TwistAngularSoftLimit.js');
let TwistLinearSoftLimit = require('./TwistLinearSoftLimit.js');
let IPv4Settings = require('./IPv4Settings.js');
let BootloaderVersion = require('./BootloaderVersion.js');
let Calibration = require('./Calibration.js');
let CalibrationElement = require('./CalibrationElement.js');
let CalibrationItem = require('./CalibrationItem.js');
let CalibrationParameter = require('./CalibrationParameter.js');
let CalibrationParameter_value = require('./CalibrationParameter_value.js');
let CalibrationResult = require('./CalibrationResult.js');
let CalibrationStatus = require('./CalibrationStatus.js');
let CapSenseRegister = require('./CapSenseRegister.js');
let DeviceConfig_CapSenseConfig = require('./DeviceConfig_CapSenseConfig.js');
let DeviceConfig_CapSenseMode = require('./DeviceConfig_CapSenseMode.js');
let DeviceConfig_SafetyLimitType = require('./DeviceConfig_SafetyLimitType.js');
let DeviceConfig_ServiceVersion = require('./DeviceConfig_ServiceVersion.js');
let DeviceType = require('./DeviceType.js');
let FirmwareVersion = require('./FirmwareVersion.js');
let MACAddress = require('./MACAddress.js');
let ModelNumber = require('./ModelNumber.js');
let PartNumber = require('./PartNumber.js');
let PartNumberRevision = require('./PartNumberRevision.js');
let PowerOnSelfTestResult = require('./PowerOnSelfTestResult.js');
let RebootRqst = require('./RebootRqst.js');
let RunMode = require('./RunMode.js');
let RunModes = require('./RunModes.js');
let SafetyConfiguration = require('./SafetyConfiguration.js');
let SafetyConfigurationList = require('./SafetyConfigurationList.js');
let SafetyEnable = require('./SafetyEnable.js');
let SafetyInformation = require('./SafetyInformation.js');
let SafetyInformationList = require('./SafetyInformationList.js');
let SafetyStatus = require('./SafetyStatus.js');
let SafetyThreshold = require('./SafetyThreshold.js');
let SerialNumber = require('./SerialNumber.js');
let DeviceHandles = require('./DeviceHandles.js');
let DeviceManager_ServiceVersion = require('./DeviceManager_ServiceVersion.js');
let GripperConfig_SafetyIdentifier = require('./GripperConfig_SafetyIdentifier.js');
let RobotiqGripperStatusFlags = require('./RobotiqGripperStatusFlags.js');
let CustomDataUnit = require('./CustomDataUnit.js');
let GripperCyclic_Command = require('./GripperCyclic_Command.js');
let GripperCyclic_CustomData = require('./GripperCyclic_CustomData.js');
let GripperCyclic_Feedback = require('./GripperCyclic_Feedback.js');
let GripperCyclic_MessageId = require('./GripperCyclic_MessageId.js');
let GripperCyclic_ServiceVersion = require('./GripperCyclic_ServiceVersion.js');
let MotorCommand = require('./MotorCommand.js');
let MotorFeedback = require('./MotorFeedback.js');
let EthernetConfiguration = require('./EthernetConfiguration.js');
let EthernetDevice = require('./EthernetDevice.js');
let EthernetDeviceIdentification = require('./EthernetDeviceIdentification.js');
let EthernetDuplex = require('./EthernetDuplex.js');
let EthernetSpeed = require('./EthernetSpeed.js');
let GPIOIdentification = require('./GPIOIdentification.js');
let GPIOIdentifier = require('./GPIOIdentifier.js');
let GPIOMode = require('./GPIOMode.js');
let GPIOPull = require('./GPIOPull.js');
let GPIOState = require('./GPIOState.js');
let GPIOValue = require('./GPIOValue.js');
let I2CConfiguration = require('./I2CConfiguration.js');
let I2CData = require('./I2CData.js');
let I2CDevice = require('./I2CDevice.js');
let I2CDeviceAddressing = require('./I2CDeviceAddressing.js');
let I2CDeviceIdentification = require('./I2CDeviceIdentification.js');
let I2CMode = require('./I2CMode.js');
let I2CReadParameter = require('./I2CReadParameter.js');
let I2CReadRegisterParameter = require('./I2CReadRegisterParameter.js');
let I2CRegisterAddressSize = require('./I2CRegisterAddressSize.js');
let I2CWriteParameter = require('./I2CWriteParameter.js');
let I2CWriteRegisterParameter = require('./I2CWriteRegisterParameter.js');
let InterconnectConfig_GPIOConfiguration = require('./InterconnectConfig_GPIOConfiguration.js');
let InterconnectConfig_SafetyIdentifier = require('./InterconnectConfig_SafetyIdentifier.js');
let InterconnectConfig_ServiceVersion = require('./InterconnectConfig_ServiceVersion.js');
let UARTPortId = require('./UARTPortId.js');
let InterconnectCyclic_Command = require('./InterconnectCyclic_Command.js');
let InterconnectCyclic_Command_tool_command = require('./InterconnectCyclic_Command_tool_command.js');
let InterconnectCyclic_CustomData = require('./InterconnectCyclic_CustomData.js');
let InterconnectCyclic_CustomData_tool_customData = require('./InterconnectCyclic_CustomData_tool_customData.js');
let InterconnectCyclic_Feedback = require('./InterconnectCyclic_Feedback.js');
let InterconnectCyclic_Feedback_tool_feedback = require('./InterconnectCyclic_Feedback_tool_feedback.js');
let InterconnectCyclic_MessageId = require('./InterconnectCyclic_MessageId.js');
let InterconnectCyclic_ServiceVersion = require('./InterconnectCyclic_ServiceVersion.js');
let ArmLaterality = require('./ArmLaterality.js');
let BaseType = require('./BaseType.js');
let CompleteProductConfiguration = require('./CompleteProductConfiguration.js');
let EndEffectorType = require('./EndEffectorType.js');
let InterfaceModuleType = require('./InterfaceModuleType.js');
let ModelId = require('./ModelId.js');
let ProductConfigurationEndEffectorType = require('./ProductConfigurationEndEffectorType.js');
let VisionModuleType = require('./VisionModuleType.js');
let WristType = require('./WristType.js');
let BitRate = require('./BitRate.js');
let DistortionCoefficients = require('./DistortionCoefficients.js');
let ExtrinsicParameters = require('./ExtrinsicParameters.js');
let FocusAction = require('./FocusAction.js');
let FocusPoint = require('./FocusPoint.js');
let FrameRate = require('./FrameRate.js');
let IntrinsicParameters = require('./IntrinsicParameters.js');
let IntrinsicProfileIdentifier = require('./IntrinsicProfileIdentifier.js');
let ManualFocus = require('./ManualFocus.js');
let Option = require('./Option.js');
let OptionIdentifier = require('./OptionIdentifier.js');
let OptionInformation = require('./OptionInformation.js');
let OptionValue = require('./OptionValue.js');
let Resolution = require('./Resolution.js');
let Sensor = require('./Sensor.js');
let SensorFocusAction = require('./SensorFocusAction.js');
let SensorFocusAction_action_parameters = require('./SensorFocusAction_action_parameters.js');
let SensorIdentifier = require('./SensorIdentifier.js');
let SensorSettings = require('./SensorSettings.js');
let TranslationVector = require('./TranslationVector.js');
let VisionConfig_RotationMatrix = require('./VisionConfig_RotationMatrix.js');
let VisionConfig_RotationMatrixRow = require('./VisionConfig_RotationMatrixRow.js');
let VisionConfig_ServiceVersion = require('./VisionConfig_ServiceVersion.js');
let VisionEvent = require('./VisionEvent.js');
let VisionNotification = require('./VisionNotification.js');
let FollowCartesianTrajectoryAction = require('./FollowCartesianTrajectoryAction.js');
let FollowCartesianTrajectoryActionFeedback = require('./FollowCartesianTrajectoryActionFeedback.js');
let FollowCartesianTrajectoryActionGoal = require('./FollowCartesianTrajectoryActionGoal.js');
let FollowCartesianTrajectoryActionResult = require('./FollowCartesianTrajectoryActionResult.js');
let FollowCartesianTrajectoryFeedback = require('./FollowCartesianTrajectoryFeedback.js');
let FollowCartesianTrajectoryGoal = require('./FollowCartesianTrajectoryGoal.js');
let FollowCartesianTrajectoryResult = require('./FollowCartesianTrajectoryResult.js');

module.exports = {
  ApiOptions: ApiOptions,
  KortexError: KortexError,
  ErrorCodes: ErrorCodes,
  SubErrorCodes: SubErrorCodes,
  ActuatorConfig_ControlMode: ActuatorConfig_ControlMode,
  ActuatorConfig_ControlModeInformation: ActuatorConfig_ControlModeInformation,
  ActuatorConfig_SafetyLimitType: ActuatorConfig_SafetyLimitType,
  ActuatorConfig_ServiceVersion: ActuatorConfig_ServiceVersion,
  AxisOffsets: AxisOffsets,
  AxisPosition: AxisPosition,
  CoggingFeedforwardMode: CoggingFeedforwardMode,
  CoggingFeedforwardModeInformation: CoggingFeedforwardModeInformation,
  CommandMode: CommandMode,
  CommandModeInformation: CommandModeInformation,
  ControlLoop: ControlLoop,
  ControlLoopParameters: ControlLoopParameters,
  ControlLoopSelection: ControlLoopSelection,
  CustomDataIndex: CustomDataIndex,
  CustomDataSelection: CustomDataSelection,
  EncoderDerivativeParameters: EncoderDerivativeParameters,
  FrequencyResponse: FrequencyResponse,
  LoopSelection: LoopSelection,
  PositionCommand: PositionCommand,
  RampResponse: RampResponse,
  SafetyIdentifierBankA: SafetyIdentifierBankA,
  Servoing: Servoing,
  StepResponse: StepResponse,
  TorqueCalibration: TorqueCalibration,
  TorqueOffset: TorqueOffset,
  VectorDriveParameters: VectorDriveParameters,
  ActuatorCyclic_Command: ActuatorCyclic_Command,
  ActuatorCyclic_CustomData: ActuatorCyclic_CustomData,
  ActuatorCyclic_Feedback: ActuatorCyclic_Feedback,
  ActuatorCyclic_MessageId: ActuatorCyclic_MessageId,
  ActuatorCyclic_ServiceVersion: ActuatorCyclic_ServiceVersion,
  CommandFlags: CommandFlags,
  StatusFlags: StatusFlags,
  Action: Action,
  ActionEvent: ActionEvent,
  ActionExecutionState: ActionExecutionState,
  ActionHandle: ActionHandle,
  ActionList: ActionList,
  ActionNotification: ActionNotification,
  ActionNotificationList: ActionNotificationList,
  ActionType: ActionType,
  Action_action_parameters: Action_action_parameters,
  ActivateMapHandle: ActivateMapHandle,
  ActuatorInformation: ActuatorInformation,
  Admittance: Admittance,
  AdmittanceMode: AdmittanceMode,
  AdvancedSequenceHandle: AdvancedSequenceHandle,
  AngularWaypoint: AngularWaypoint,
  ArmStateInformation: ArmStateInformation,
  ArmStateNotification: ArmStateNotification,
  BackupEvent: BackupEvent,
  Base_CapSenseConfig: Base_CapSenseConfig,
  Base_CapSenseMode: Base_CapSenseMode,
  Base_ControlMode: Base_ControlMode,
  Base_ControlModeInformation: Base_ControlModeInformation,
  Base_ControlModeNotification: Base_ControlModeNotification,
  Base_GpioConfiguration: Base_GpioConfiguration,
  Base_JointSpeeds: Base_JointSpeeds,
  Base_Position: Base_Position,
  Base_RotationMatrix: Base_RotationMatrix,
  Base_RotationMatrixRow: Base_RotationMatrixRow,
  Base_SafetyIdentifier: Base_SafetyIdentifier,
  Base_ServiceVersion: Base_ServiceVersion,
  BridgeConfig: BridgeConfig,
  BridgeIdentifier: BridgeIdentifier,
  BridgeList: BridgeList,
  BridgePortConfig: BridgePortConfig,
  BridgeResult: BridgeResult,
  BridgeStatus: BridgeStatus,
  BridgeType: BridgeType,
  CartesianLimitation: CartesianLimitation,
  CartesianLimitationList: CartesianLimitationList,
  CartesianSpeed: CartesianSpeed,
  CartesianTrajectoryConstraint: CartesianTrajectoryConstraint,
  CartesianTrajectoryConstraint_type: CartesianTrajectoryConstraint_type,
  CartesianWaypoint: CartesianWaypoint,
  ChangeJointSpeeds: ChangeJointSpeeds,
  ChangeWrench: ChangeWrench,
  CommunicationInterfaceConfiguration: CommunicationInterfaceConfiguration,
  ConfigurationChangeNotification: ConfigurationChangeNotification,
  ConfigurationChangeNotificationList: ConfigurationChangeNotificationList,
  ConfigurationChangeNotification_configuration_change: ConfigurationChangeNotification_configuration_change,
  ConfigurationNotificationEvent: ConfigurationNotificationEvent,
  ConstrainedJointAngle: ConstrainedJointAngle,
  ConstrainedJointAngles: ConstrainedJointAngles,
  ConstrainedOrientation: ConstrainedOrientation,
  ConstrainedPose: ConstrainedPose,
  ConstrainedPosition: ConstrainedPosition,
  ControllerBehavior: ControllerBehavior,
  ControllerConfiguration: ControllerConfiguration,
  ControllerConfigurationList: ControllerConfigurationList,
  AppendActionInformation: AppendActionInformation,
  Base_Stop: Base_Stop,
  ChangeTwist: ChangeTwist,
  ControllerConfigurationMode: ControllerConfigurationMode,
  Delay: Delay,
  GpioPinConfiguration: GpioPinConfiguration,
  JointTrajectoryConstraint: JointTrajectoryConstraint,
  MappingInfoNotificationList: MappingInfoNotificationList,
  PreComputedJointTrajectory: PreComputedJointTrajectory,
  Sequence: Sequence,
  ServoingModeNotificationList: ServoingModeNotificationList,
  TransformationMatrix: TransformationMatrix,
  ControllerElementEventType: ControllerElementEventType,
  ControllerElementHandle: ControllerElementHandle,
  ControllerElementHandle_identifier: ControllerElementHandle_identifier,
  ControllerElementState: ControllerElementState,
  ControllerEvent: ControllerEvent,
  ControllerEventType: ControllerEventType,
  ControllerHandle: ControllerHandle,
  ControllerInputType: ControllerInputType,
  ControllerList: ControllerList,
  ControllerNotification: ControllerNotification,
  ControllerNotificationList: ControllerNotificationList,
  ControllerNotification_state: ControllerNotification_state,
  ControllerState: ControllerState,
  ControllerType: ControllerType,
  ControlModeNotificationList: ControlModeNotificationList,
  EmergencyStop: EmergencyStop,
  EventIdSequenceInfoNotification: EventIdSequenceInfoNotification,
  FactoryEvent: FactoryEvent,
  FactoryNotification: FactoryNotification,
  Faults: Faults,
  Finger: Finger,
  FirmwareBundleVersions: FirmwareBundleVersions,
  FirmwareComponentVersion: FirmwareComponentVersion,
  FullIPv4Configuration: FullIPv4Configuration,
  FullUserProfile: FullUserProfile,
  Gen3GpioPinId: Gen3GpioPinId,
  GpioAction: GpioAction,
  GpioBehavior: GpioBehavior,
  GpioCommand: GpioCommand,
  GpioConfigurationList: GpioConfigurationList,
  GpioEvent: GpioEvent,
  GpioPinPropertyFlags: GpioPinPropertyFlags,
  Gripper: Gripper,
  GripperCommand: GripperCommand,
  GripperMode: GripperMode,
  GripperRequest: GripperRequest,
  IKData: IKData,
  IPv4Configuration: IPv4Configuration,
  IPv4Information: IPv4Information,
  JointAngle: JointAngle,
  JointAngles: JointAngles,
  JointLimitation: JointLimitation,
  JointNavigationDirection: JointNavigationDirection,
  JointsLimitationsList: JointsLimitationsList,
  JointSpeed: JointSpeed,
  JointTorque: JointTorque,
  JointTorques: JointTorques,
  JointTrajectoryConstraintType: JointTrajectoryConstraintType,
  KinematicTrajectoryConstraints: KinematicTrajectoryConstraints,
  LedState: LedState,
  LimitationType: LimitationType,
  Map: Map,
  MapElement: MapElement,
  MapEvent: MapEvent,
  MapEvent_events: MapEvent_events,
  MapGroup: MapGroup,
  MapGroupHandle: MapGroupHandle,
  MapGroupList: MapGroupList,
  MapHandle: MapHandle,
  MapList: MapList,
  Mapping: Mapping,
  MappingHandle: MappingHandle,
  MappingInfoNotification: MappingInfoNotification,
  MappingList: MappingList,
  NavigationDirection: NavigationDirection,
  NetworkEvent: NetworkEvent,
  NetworkHandle: NetworkHandle,
  NetworkNotification: NetworkNotification,
  NetworkNotificationList: NetworkNotificationList,
  NetworkType: NetworkType,
  OperatingMode: OperatingMode,
  OperatingModeInformation: OperatingModeInformation,
  OperatingModeNotification: OperatingModeNotification,
  OperatingModeNotificationList: OperatingModeNotificationList,
  Orientation: Orientation,
  PasswordChange: PasswordChange,
  Point: Point,
  Pose: Pose,
  PreComputedJointTrajectoryElement: PreComputedJointTrajectoryElement,
  ProtectionZone: ProtectionZone,
  ProtectionZoneEvent: ProtectionZoneEvent,
  ProtectionZoneHandle: ProtectionZoneHandle,
  ProtectionZoneInformation: ProtectionZoneInformation,
  ProtectionZoneList: ProtectionZoneList,
  ProtectionZoneNotification: ProtectionZoneNotification,
  ProtectionZoneNotificationList: ProtectionZoneNotificationList,
  Query: Query,
  RequestedActionType: RequestedActionType,
  RobotEvent: RobotEvent,
  RobotEventNotification: RobotEventNotification,
  RobotEventNotificationList: RobotEventNotificationList,
  SafetyEvent: SafetyEvent,
  SafetyNotificationList: SafetyNotificationList,
  SequenceHandle: SequenceHandle,
  SequenceInfoNotification: SequenceInfoNotification,
  SequenceInfoNotificationList: SequenceInfoNotificationList,
  SequenceInformation: SequenceInformation,
  SequenceList: SequenceList,
  SequenceTask: SequenceTask,
  SequenceTaskConfiguration: SequenceTaskConfiguration,
  SequenceTaskHandle: SequenceTaskHandle,
  SequenceTasks: SequenceTasks,
  SequenceTasksConfiguration: SequenceTasksConfiguration,
  SequenceTasksPair: SequenceTasksPair,
  SequenceTasksRange: SequenceTasksRange,
  ServoingMode: ServoingMode,
  ServoingModeInformation: ServoingModeInformation,
  ServoingModeNotification: ServoingModeNotification,
  ShapeType: ShapeType,
  SignalQuality: SignalQuality,
  Snapshot: Snapshot,
  SnapshotType: SnapshotType,
  SoundType: SoundType,
  Ssid: Ssid,
  SwitchControlMapping: SwitchControlMapping,
  SystemTime: SystemTime,
  Timeout: Timeout,
  TrajectoryContinuityMode: TrajectoryContinuityMode,
  TrajectoryErrorElement: TrajectoryErrorElement,
  TrajectoryErrorIdentifier: TrajectoryErrorIdentifier,
  TrajectoryErrorReport: TrajectoryErrorReport,
  TrajectoryErrorType: TrajectoryErrorType,
  TrajectoryInfo: TrajectoryInfo,
  TrajectoryInfoType: TrajectoryInfoType,
  TransformationRow: TransformationRow,
  Twist: Twist,
  TwistCommand: TwistCommand,
  TwistLimitation: TwistLimitation,
  UserEvent: UserEvent,
  UserList: UserList,
  UserNotification: UserNotification,
  UserNotificationList: UserNotificationList,
  UserProfile: UserProfile,
  UserProfileList: UserProfileList,
  Waypoint: Waypoint,
  WaypointList: WaypointList,
  WaypointValidationReport: WaypointValidationReport,
  Waypoint_type_of_waypoint: Waypoint_type_of_waypoint,
  WifiConfiguration: WifiConfiguration,
  WifiConfigurationList: WifiConfigurationList,
  WifiEncryptionType: WifiEncryptionType,
  WifiInformation: WifiInformation,
  WifiInformationList: WifiInformationList,
  WifiSecurityType: WifiSecurityType,
  Wrench: Wrench,
  WrenchCommand: WrenchCommand,
  WrenchLimitation: WrenchLimitation,
  WrenchMode: WrenchMode,
  WristDigitalInputIdentifier: WristDigitalInputIdentifier,
  Xbox360AnalogInputIdentifier: Xbox360AnalogInputIdentifier,
  Xbox360DigitalInputIdentifier: Xbox360DigitalInputIdentifier,
  ZoneShape: ZoneShape,
  ActuatorCommand: ActuatorCommand,
  ActuatorCustomData: ActuatorCustomData,
  ActuatorFeedback: ActuatorFeedback,
  BaseCyclic_Command: BaseCyclic_Command,
  BaseCyclic_CustomData: BaseCyclic_CustomData,
  BaseCyclic_Feedback: BaseCyclic_Feedback,
  BaseCyclic_ServiceVersion: BaseCyclic_ServiceVersion,
  BaseFeedback: BaseFeedback,
  ArmState: ArmState,
  CartesianReferenceFrame: CartesianReferenceFrame,
  Connection: Connection,
  CountryCode: CountryCode,
  CountryCodeIdentifier: CountryCodeIdentifier,
  DeviceHandle: DeviceHandle,
  DeviceTypes: DeviceTypes,
  Empty: Empty,
  NotificationHandle: NotificationHandle,
  NotificationOptions: NotificationOptions,
  NotificationType: NotificationType,
  Permission: Permission,
  SafetyHandle: SafetyHandle,
  SafetyNotification: SafetyNotification,
  SafetyStatusValue: SafetyStatusValue,
  Timestamp: Timestamp,
  UARTConfiguration: UARTConfiguration,
  UARTDeviceIdentification: UARTDeviceIdentification,
  UARTParity: UARTParity,
  UARTSpeed: UARTSpeed,
  UARTStopBits: UARTStopBits,
  UARTWordLength: UARTWordLength,
  Unit: Unit,
  UserProfileHandle: UserProfileHandle,
  AngularTwist: AngularTwist,
  CartesianReferenceFrameInfo: CartesianReferenceFrameInfo,
  CartesianTransform: CartesianTransform,
  ControlConfigurationEvent: ControlConfigurationEvent,
  ControlConfigurationNotification: ControlConfigurationNotification,
  ControlConfig_ControlMode: ControlConfig_ControlMode,
  ControlConfig_ControlModeInformation: ControlConfig_ControlModeInformation,
  ControlConfig_ControlModeNotification: ControlConfig_ControlModeNotification,
  ControlConfig_JointSpeeds: ControlConfig_JointSpeeds,
  ControlConfig_Position: ControlConfig_Position,
  ControlConfig_ServiceVersion: ControlConfig_ServiceVersion,
  DesiredSpeeds: DesiredSpeeds,
  GravityVector: GravityVector,
  JointAccelerationSoftLimits: JointAccelerationSoftLimits,
  JointSpeedSoftLimits: JointSpeedSoftLimits,
  KinematicLimits: KinematicLimits,
  KinematicLimitsList: KinematicLimitsList,
  LinearTwist: LinearTwist,
  PayloadInformation: PayloadInformation,
  ToolConfiguration: ToolConfiguration,
  TwistAngularSoftLimit: TwistAngularSoftLimit,
  TwistLinearSoftLimit: TwistLinearSoftLimit,
  IPv4Settings: IPv4Settings,
  BootloaderVersion: BootloaderVersion,
  Calibration: Calibration,
  CalibrationElement: CalibrationElement,
  CalibrationItem: CalibrationItem,
  CalibrationParameter: CalibrationParameter,
  CalibrationParameter_value: CalibrationParameter_value,
  CalibrationResult: CalibrationResult,
  CalibrationStatus: CalibrationStatus,
  CapSenseRegister: CapSenseRegister,
  DeviceConfig_CapSenseConfig: DeviceConfig_CapSenseConfig,
  DeviceConfig_CapSenseMode: DeviceConfig_CapSenseMode,
  DeviceConfig_SafetyLimitType: DeviceConfig_SafetyLimitType,
  DeviceConfig_ServiceVersion: DeviceConfig_ServiceVersion,
  DeviceType: DeviceType,
  FirmwareVersion: FirmwareVersion,
  MACAddress: MACAddress,
  ModelNumber: ModelNumber,
  PartNumber: PartNumber,
  PartNumberRevision: PartNumberRevision,
  PowerOnSelfTestResult: PowerOnSelfTestResult,
  RebootRqst: RebootRqst,
  RunMode: RunMode,
  RunModes: RunModes,
  SafetyConfiguration: SafetyConfiguration,
  SafetyConfigurationList: SafetyConfigurationList,
  SafetyEnable: SafetyEnable,
  SafetyInformation: SafetyInformation,
  SafetyInformationList: SafetyInformationList,
  SafetyStatus: SafetyStatus,
  SafetyThreshold: SafetyThreshold,
  SerialNumber: SerialNumber,
  DeviceHandles: DeviceHandles,
  DeviceManager_ServiceVersion: DeviceManager_ServiceVersion,
  GripperConfig_SafetyIdentifier: GripperConfig_SafetyIdentifier,
  RobotiqGripperStatusFlags: RobotiqGripperStatusFlags,
  CustomDataUnit: CustomDataUnit,
  GripperCyclic_Command: GripperCyclic_Command,
  GripperCyclic_CustomData: GripperCyclic_CustomData,
  GripperCyclic_Feedback: GripperCyclic_Feedback,
  GripperCyclic_MessageId: GripperCyclic_MessageId,
  GripperCyclic_ServiceVersion: GripperCyclic_ServiceVersion,
  MotorCommand: MotorCommand,
  MotorFeedback: MotorFeedback,
  EthernetConfiguration: EthernetConfiguration,
  EthernetDevice: EthernetDevice,
  EthernetDeviceIdentification: EthernetDeviceIdentification,
  EthernetDuplex: EthernetDuplex,
  EthernetSpeed: EthernetSpeed,
  GPIOIdentification: GPIOIdentification,
  GPIOIdentifier: GPIOIdentifier,
  GPIOMode: GPIOMode,
  GPIOPull: GPIOPull,
  GPIOState: GPIOState,
  GPIOValue: GPIOValue,
  I2CConfiguration: I2CConfiguration,
  I2CData: I2CData,
  I2CDevice: I2CDevice,
  I2CDeviceAddressing: I2CDeviceAddressing,
  I2CDeviceIdentification: I2CDeviceIdentification,
  I2CMode: I2CMode,
  I2CReadParameter: I2CReadParameter,
  I2CReadRegisterParameter: I2CReadRegisterParameter,
  I2CRegisterAddressSize: I2CRegisterAddressSize,
  I2CWriteParameter: I2CWriteParameter,
  I2CWriteRegisterParameter: I2CWriteRegisterParameter,
  InterconnectConfig_GPIOConfiguration: InterconnectConfig_GPIOConfiguration,
  InterconnectConfig_SafetyIdentifier: InterconnectConfig_SafetyIdentifier,
  InterconnectConfig_ServiceVersion: InterconnectConfig_ServiceVersion,
  UARTPortId: UARTPortId,
  InterconnectCyclic_Command: InterconnectCyclic_Command,
  InterconnectCyclic_Command_tool_command: InterconnectCyclic_Command_tool_command,
  InterconnectCyclic_CustomData: InterconnectCyclic_CustomData,
  InterconnectCyclic_CustomData_tool_customData: InterconnectCyclic_CustomData_tool_customData,
  InterconnectCyclic_Feedback: InterconnectCyclic_Feedback,
  InterconnectCyclic_Feedback_tool_feedback: InterconnectCyclic_Feedback_tool_feedback,
  InterconnectCyclic_MessageId: InterconnectCyclic_MessageId,
  InterconnectCyclic_ServiceVersion: InterconnectCyclic_ServiceVersion,
  ArmLaterality: ArmLaterality,
  BaseType: BaseType,
  CompleteProductConfiguration: CompleteProductConfiguration,
  EndEffectorType: EndEffectorType,
  InterfaceModuleType: InterfaceModuleType,
  ModelId: ModelId,
  ProductConfigurationEndEffectorType: ProductConfigurationEndEffectorType,
  VisionModuleType: VisionModuleType,
  WristType: WristType,
  BitRate: BitRate,
  DistortionCoefficients: DistortionCoefficients,
  ExtrinsicParameters: ExtrinsicParameters,
  FocusAction: FocusAction,
  FocusPoint: FocusPoint,
  FrameRate: FrameRate,
  IntrinsicParameters: IntrinsicParameters,
  IntrinsicProfileIdentifier: IntrinsicProfileIdentifier,
  ManualFocus: ManualFocus,
  Option: Option,
  OptionIdentifier: OptionIdentifier,
  OptionInformation: OptionInformation,
  OptionValue: OptionValue,
  Resolution: Resolution,
  Sensor: Sensor,
  SensorFocusAction: SensorFocusAction,
  SensorFocusAction_action_parameters: SensorFocusAction_action_parameters,
  SensorIdentifier: SensorIdentifier,
  SensorSettings: SensorSettings,
  TranslationVector: TranslationVector,
  VisionConfig_RotationMatrix: VisionConfig_RotationMatrix,
  VisionConfig_RotationMatrixRow: VisionConfig_RotationMatrixRow,
  VisionConfig_ServiceVersion: VisionConfig_ServiceVersion,
  VisionEvent: VisionEvent,
  VisionNotification: VisionNotification,
  FollowCartesianTrajectoryAction: FollowCartesianTrajectoryAction,
  FollowCartesianTrajectoryActionFeedback: FollowCartesianTrajectoryActionFeedback,
  FollowCartesianTrajectoryActionGoal: FollowCartesianTrajectoryActionGoal,
  FollowCartesianTrajectoryActionResult: FollowCartesianTrajectoryActionResult,
  FollowCartesianTrajectoryFeedback: FollowCartesianTrajectoryFeedback,
  FollowCartesianTrajectoryGoal: FollowCartesianTrajectoryGoal,
  FollowCartesianTrajectoryResult: FollowCartesianTrajectoryResult,
};
