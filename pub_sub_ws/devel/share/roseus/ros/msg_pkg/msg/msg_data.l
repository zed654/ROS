;; Auto-generated. Do not edit!


(when (boundp 'msg_pkg::msg_data)
  (if (not (find-package "MSG_PKG"))
    (make-package "MSG_PKG"))
  (shadow 'msg_data (find-package "MSG_PKG")))
(unless (find-package "MSG_PKG::MSG_DATA")
  (make-package "MSG_PKG::MSG_DATA"))

(in-package "ROS")
;;//! \htmlinclude msg_data.msg.html


(defclass msg_pkg::msg_data
  :super ros::object
  :slots (_data1 _data2 ))

(defmethod msg_pkg::msg_data
  (:init
   (&key
    ((:data1 __data1) 0)
    ((:data2 __data2) 0)
    )
   (send-super :init)
   (setq _data1 (round __data1))
   (setq _data2 (round __data2))
   self)
  (:data1
   (&optional __data1)
   (if __data1 (setq _data1 __data1)) _data1)
  (:data2
   (&optional __data2)
   (if __data2 (setq _data2 __data2)) _data2)
  (:serialization-length
   ()
   (+
    ;; int32 _data1
    4
    ;; int32 _data2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _data1
       (write-long _data1 s)
     ;; int32 _data2
       (write-long _data2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _data1
     (setq _data1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _data2
     (setq _data2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get msg_pkg::msg_data :md5sum-) "974ada69e2d7501b3274b7b8e93825bd")
(setf (get msg_pkg::msg_data :datatype-) "msg_pkg/msg_data")
(setf (get msg_pkg::msg_data :definition-)
      "int32 data1
int32 data2

")



(provide :msg_pkg/msg_data "974ada69e2d7501b3274b7b8e93825bd")


