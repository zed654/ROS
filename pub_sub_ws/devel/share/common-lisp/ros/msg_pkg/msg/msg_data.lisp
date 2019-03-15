; Auto-generated. Do not edit!


(cl:in-package msg_pkg-msg)


;//! \htmlinclude msg_data.msg.html

(cl:defclass <msg_data> (roslisp-msg-protocol:ros-message)
  ((data1
    :reader data1
    :initarg :data1
    :type cl:integer
    :initform 0)
   (data2
    :reader data2
    :initarg :data2
    :type cl:integer
    :initform 0))
)

(cl:defclass msg_data (<msg_data>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <msg_data>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'msg_data)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name msg_pkg-msg:<msg_data> is deprecated: use msg_pkg-msg:msg_data instead.")))

(cl:ensure-generic-function 'data1-val :lambda-list '(m))
(cl:defmethod data1-val ((m <msg_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader msg_pkg-msg:data1-val is deprecated.  Use msg_pkg-msg:data1 instead.")
  (data1 m))

(cl:ensure-generic-function 'data2-val :lambda-list '(m))
(cl:defmethod data2-val ((m <msg_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader msg_pkg-msg:data2-val is deprecated.  Use msg_pkg-msg:data2 instead.")
  (data2 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <msg_data>) ostream)
  "Serializes a message object of type '<msg_data>"
  (cl:let* ((signed (cl:slot-value msg 'data1)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'data2)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <msg_data>) istream)
  "Deserializes a message object of type '<msg_data>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'data1) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'data2) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<msg_data>)))
  "Returns string type for a message object of type '<msg_data>"
  "msg_pkg/msg_data")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'msg_data)))
  "Returns string type for a message object of type 'msg_data"
  "msg_pkg/msg_data")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<msg_data>)))
  "Returns md5sum for a message object of type '<msg_data>"
  "974ada69e2d7501b3274b7b8e93825bd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'msg_data)))
  "Returns md5sum for a message object of type 'msg_data"
  "974ada69e2d7501b3274b7b8e93825bd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<msg_data>)))
  "Returns full string definition for message of type '<msg_data>"
  (cl:format cl:nil "int32 data1~%int32 data2~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'msg_data)))
  "Returns full string definition for message of type 'msg_data"
  (cl:format cl:nil "int32 data1~%int32 data2~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <msg_data>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <msg_data>))
  "Converts a ROS message object to a list"
  (cl:list 'msg_data
    (cl:cons ':data1 (data1 msg))
    (cl:cons ':data2 (data2 msg))
))
