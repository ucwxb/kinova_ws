; Auto-generated. Do not edit!


(cl:in-package kortex_driver-srv)


;//! \htmlinclude ResetSafetyDefaults-request.msg.html

(cl:defclass <ResetSafetyDefaults-request> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type kortex_driver-msg:Empty
    :initform (cl:make-instance 'kortex_driver-msg:Empty)))
)

(cl:defclass ResetSafetyDefaults-request (<ResetSafetyDefaults-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ResetSafetyDefaults-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ResetSafetyDefaults-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name kortex_driver-srv:<ResetSafetyDefaults-request> is deprecated: use kortex_driver-srv:ResetSafetyDefaults-request instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <ResetSafetyDefaults-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kortex_driver-srv:input-val is deprecated.  Use kortex_driver-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ResetSafetyDefaults-request>) ostream)
  "Serializes a message object of type '<ResetSafetyDefaults-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'input) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ResetSafetyDefaults-request>) istream)
  "Deserializes a message object of type '<ResetSafetyDefaults-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'input) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ResetSafetyDefaults-request>)))
  "Returns string type for a service object of type '<ResetSafetyDefaults-request>"
  "kortex_driver/ResetSafetyDefaultsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ResetSafetyDefaults-request)))
  "Returns string type for a service object of type 'ResetSafetyDefaults-request"
  "kortex_driver/ResetSafetyDefaultsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ResetSafetyDefaults-request>)))
  "Returns md5sum for a message object of type '<ResetSafetyDefaults-request>"
  "f335b819dc59099fe3124b36f140ad07")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ResetSafetyDefaults-request)))
  "Returns md5sum for a message object of type 'ResetSafetyDefaults-request"
  "f335b819dc59099fe3124b36f140ad07")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ResetSafetyDefaults-request>)))
  "Returns full string definition for message of type '<ResetSafetyDefaults-request>"
  (cl:format cl:nil "Empty input~%~%================================================================================~%MSG: kortex_driver/Empty~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ResetSafetyDefaults-request)))
  "Returns full string definition for message of type 'ResetSafetyDefaults-request"
  (cl:format cl:nil "Empty input~%~%================================================================================~%MSG: kortex_driver/Empty~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ResetSafetyDefaults-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'input))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ResetSafetyDefaults-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ResetSafetyDefaults-request
    (cl:cons ':input (input msg))
))
;//! \htmlinclude ResetSafetyDefaults-response.msg.html

(cl:defclass <ResetSafetyDefaults-response> (roslisp-msg-protocol:ros-message)
  ((output
    :reader output
    :initarg :output
    :type kortex_driver-msg:Empty
    :initform (cl:make-instance 'kortex_driver-msg:Empty)))
)

(cl:defclass ResetSafetyDefaults-response (<ResetSafetyDefaults-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ResetSafetyDefaults-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ResetSafetyDefaults-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name kortex_driver-srv:<ResetSafetyDefaults-response> is deprecated: use kortex_driver-srv:ResetSafetyDefaults-response instead.")))

(cl:ensure-generic-function 'output-val :lambda-list '(m))
(cl:defmethod output-val ((m <ResetSafetyDefaults-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kortex_driver-srv:output-val is deprecated.  Use kortex_driver-srv:output instead.")
  (output m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ResetSafetyDefaults-response>) ostream)
  "Serializes a message object of type '<ResetSafetyDefaults-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'output) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ResetSafetyDefaults-response>) istream)
  "Deserializes a message object of type '<ResetSafetyDefaults-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'output) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ResetSafetyDefaults-response>)))
  "Returns string type for a service object of type '<ResetSafetyDefaults-response>"
  "kortex_driver/ResetSafetyDefaultsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ResetSafetyDefaults-response)))
  "Returns string type for a service object of type 'ResetSafetyDefaults-response"
  "kortex_driver/ResetSafetyDefaultsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ResetSafetyDefaults-response>)))
  "Returns md5sum for a message object of type '<ResetSafetyDefaults-response>"
  "f335b819dc59099fe3124b36f140ad07")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ResetSafetyDefaults-response)))
  "Returns md5sum for a message object of type 'ResetSafetyDefaults-response"
  "f335b819dc59099fe3124b36f140ad07")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ResetSafetyDefaults-response>)))
  "Returns full string definition for message of type '<ResetSafetyDefaults-response>"
  (cl:format cl:nil "Empty output~%~%================================================================================~%MSG: kortex_driver/Empty~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ResetSafetyDefaults-response)))
  "Returns full string definition for message of type 'ResetSafetyDefaults-response"
  (cl:format cl:nil "Empty output~%~%================================================================================~%MSG: kortex_driver/Empty~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ResetSafetyDefaults-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'output))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ResetSafetyDefaults-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ResetSafetyDefaults-response
    (cl:cons ':output (output msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ResetSafetyDefaults)))
  'ResetSafetyDefaults-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ResetSafetyDefaults)))
  'ResetSafetyDefaults-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ResetSafetyDefaults)))
  "Returns string type for a service object of type '<ResetSafetyDefaults>"
  "kortex_driver/ResetSafetyDefaults")