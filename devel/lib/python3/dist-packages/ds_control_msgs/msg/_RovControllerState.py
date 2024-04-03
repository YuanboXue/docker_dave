# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_control_msgs/RovControllerState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import control_msgs.msg
import ds_control_msgs.msg
import ds_core_msgs.msg
import genpy
import std_msgs.msg

class RovControllerState(genpy.Message):
  _md5sum = "65da469996c922959ee19eb748f4f425"
  _type = "ds_control_msgs/RovControllerState"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# The standard 2-part DsHeader block
# This allows both a standard ROS header and DS-specific header blocks
# See HEADERS.md in ds_core_msgs for details
std_msgs/Header header
ds_core_msgs/DsHeader ds_header

RovAutoState autos
bool enabled

control_msgs/PidState fwd_state
control_msgs/PidState stbd_state
control_msgs/PidState down_state
control_msgs/PidState heading_state

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: ds_core_msgs/DsHeader
# This is half our standard header for ds_msgs; see
# HEADERS.md for details

# This header should ALWAYS be paired with a std_msgs/Header
# and should ALWAYS reference HEADERS.md.  If you're looking at this
# file to add headers to a type, you probably want to copy/paste
# the following block:
#
#     # The standard 2-part DsHeader block
#     # This allows both a standard ROS header and DS-specific header blocks
#     # See HEADERS.md in ds_core_msgs for details
#     std_msgs/Header header
#     ds_core_msgs/DsHeader ds_header
#

# Time data was received or sent out (i/o time)
time io_time

# Sensor source UUID
uint8[16] source_uuid


================================================================================
MSG: ds_control_msgs/RovAutoState
bool auto_xy_enabled
bool auto_depth_enabled
bool auto_heading_enabled

bool auto_xy_available
bool auto_depth_available
bool auto_heading_available

================================================================================
MSG: control_msgs/PidState
Header header
duration timestep
float64 error
float64 error_dot
float64 p_error
float64 i_error
float64 d_error
float64 p_term
float64 i_term
float64 d_term
float64 i_max
float64 i_min
float64 output
"""
  __slots__ = ['header','ds_header','autos','enabled','fwd_state','stbd_state','down_state','heading_state']
  _slot_types = ['std_msgs/Header','ds_core_msgs/DsHeader','ds_control_msgs/RovAutoState','bool','control_msgs/PidState','control_msgs/PidState','control_msgs/PidState','control_msgs/PidState']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,ds_header,autos,enabled,fwd_state,stbd_state,down_state,heading_state

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RovControllerState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.autos is None:
        self.autos = ds_control_msgs.msg.RovAutoState()
      if self.enabled is None:
        self.enabled = False
      if self.fwd_state is None:
        self.fwd_state = control_msgs.msg.PidState()
      if self.stbd_state is None:
        self.stbd_state = control_msgs.msg.PidState()
      if self.down_state is None:
        self.down_state = control_msgs.msg.PidState()
      if self.heading_state is None:
        self.heading_state = control_msgs.msg.PidState()
    else:
      self.header = std_msgs.msg.Header()
      self.ds_header = ds_core_msgs.msg.DsHeader()
      self.autos = ds_control_msgs.msg.RovAutoState()
      self.enabled = False
      self.fwd_state = control_msgs.msg.PidState()
      self.stbd_state = control_msgs.msg.PidState()
      self.down_state = control_msgs.msg.PidState()
      self.heading_state = control_msgs.msg.PidState()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs))
      _x = self.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self
      buff.write(_get_struct_7B3I().pack(_x.autos.auto_xy_enabled, _x.autos.auto_depth_enabled, _x.autos.auto_heading_enabled, _x.autos.auto_xy_available, _x.autos.auto_depth_available, _x.autos.auto_heading_available, _x.enabled, _x.fwd_state.header.seq, _x.fwd_state.header.stamp.secs, _x.fwd_state.header.stamp.nsecs))
      _x = self.fwd_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d3I().pack(_x.fwd_state.timestep.secs, _x.fwd_state.timestep.nsecs, _x.fwd_state.error, _x.fwd_state.error_dot, _x.fwd_state.p_error, _x.fwd_state.i_error, _x.fwd_state.d_error, _x.fwd_state.p_term, _x.fwd_state.i_term, _x.fwd_state.d_term, _x.fwd_state.i_max, _x.fwd_state.i_min, _x.fwd_state.output, _x.stbd_state.header.seq, _x.stbd_state.header.stamp.secs, _x.stbd_state.header.stamp.nsecs))
      _x = self.stbd_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d3I().pack(_x.stbd_state.timestep.secs, _x.stbd_state.timestep.nsecs, _x.stbd_state.error, _x.stbd_state.error_dot, _x.stbd_state.p_error, _x.stbd_state.i_error, _x.stbd_state.d_error, _x.stbd_state.p_term, _x.stbd_state.i_term, _x.stbd_state.d_term, _x.stbd_state.i_max, _x.stbd_state.i_min, _x.stbd_state.output, _x.down_state.header.seq, _x.down_state.header.stamp.secs, _x.down_state.header.stamp.nsecs))
      _x = self.down_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d3I().pack(_x.down_state.timestep.secs, _x.down_state.timestep.nsecs, _x.down_state.error, _x.down_state.error_dot, _x.down_state.p_error, _x.down_state.i_error, _x.down_state.d_error, _x.down_state.p_term, _x.down_state.i_term, _x.down_state.d_term, _x.down_state.i_max, _x.down_state.i_min, _x.down_state.output, _x.heading_state.header.seq, _x.heading_state.header.stamp.secs, _x.heading_state.header.stamp.nsecs))
      _x = self.heading_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d().pack(_x.heading_state.timestep.secs, _x.heading_state.timestep.nsecs, _x.heading_state.error, _x.heading_state.error_dot, _x.heading_state.p_error, _x.heading_state.i_error, _x.heading_state.d_error, _x.heading_state.p_term, _x.heading_state.i_term, _x.heading_state.d_term, _x.heading_state.i_max, _x.heading_state.i_min, _x.heading_state.output))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.autos is None:
        self.autos = ds_control_msgs.msg.RovAutoState()
      if self.fwd_state is None:
        self.fwd_state = control_msgs.msg.PidState()
      if self.stbd_state is None:
        self.stbd_state = control_msgs.msg.PidState()
      if self.down_state is None:
        self.down_state = control_msgs.msg.PidState()
      if self.heading_state is None:
        self.heading_state = control_msgs.msg.PidState()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.ds_header.source_uuid = str[start:end]
      _x = self
      start = end
      end += 19
      (_x.autos.auto_xy_enabled, _x.autos.auto_depth_enabled, _x.autos.auto_heading_enabled, _x.autos.auto_xy_available, _x.autos.auto_depth_available, _x.autos.auto_heading_available, _x.enabled, _x.fwd_state.header.seq, _x.fwd_state.header.stamp.secs, _x.fwd_state.header.stamp.nsecs,) = _get_struct_7B3I().unpack(str[start:end])
      self.autos.auto_xy_enabled = bool(self.autos.auto_xy_enabled)
      self.autos.auto_depth_enabled = bool(self.autos.auto_depth_enabled)
      self.autos.auto_heading_enabled = bool(self.autos.auto_heading_enabled)
      self.autos.auto_xy_available = bool(self.autos.auto_xy_available)
      self.autos.auto_depth_available = bool(self.autos.auto_depth_available)
      self.autos.auto_heading_available = bool(self.autos.auto_heading_available)
      self.enabled = bool(self.enabled)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.fwd_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.fwd_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 108
      (_x.fwd_state.timestep.secs, _x.fwd_state.timestep.nsecs, _x.fwd_state.error, _x.fwd_state.error_dot, _x.fwd_state.p_error, _x.fwd_state.i_error, _x.fwd_state.d_error, _x.fwd_state.p_term, _x.fwd_state.i_term, _x.fwd_state.d_term, _x.fwd_state.i_max, _x.fwd_state.i_min, _x.fwd_state.output, _x.stbd_state.header.seq, _x.stbd_state.header.stamp.secs, _x.stbd_state.header.stamp.nsecs,) = _get_struct_2i11d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.stbd_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.stbd_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 108
      (_x.stbd_state.timestep.secs, _x.stbd_state.timestep.nsecs, _x.stbd_state.error, _x.stbd_state.error_dot, _x.stbd_state.p_error, _x.stbd_state.i_error, _x.stbd_state.d_error, _x.stbd_state.p_term, _x.stbd_state.i_term, _x.stbd_state.d_term, _x.stbd_state.i_max, _x.stbd_state.i_min, _x.stbd_state.output, _x.down_state.header.seq, _x.down_state.header.stamp.secs, _x.down_state.header.stamp.nsecs,) = _get_struct_2i11d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.down_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.down_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 108
      (_x.down_state.timestep.secs, _x.down_state.timestep.nsecs, _x.down_state.error, _x.down_state.error_dot, _x.down_state.p_error, _x.down_state.i_error, _x.down_state.d_error, _x.down_state.p_term, _x.down_state.i_term, _x.down_state.d_term, _x.down_state.i_max, _x.down_state.i_min, _x.down_state.output, _x.heading_state.header.seq, _x.heading_state.header.stamp.secs, _x.heading_state.header.stamp.nsecs,) = _get_struct_2i11d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.heading_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.heading_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 96
      (_x.heading_state.timestep.secs, _x.heading_state.timestep.nsecs, _x.heading_state.error, _x.heading_state.error_dot, _x.heading_state.p_error, _x.heading_state.i_error, _x.heading_state.d_error, _x.heading_state.p_term, _x.heading_state.i_term, _x.heading_state.d_term, _x.heading_state.i_max, _x.heading_state.i_min, _x.heading_state.output,) = _get_struct_2i11d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs))
      _x = self.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self
      buff.write(_get_struct_7B3I().pack(_x.autos.auto_xy_enabled, _x.autos.auto_depth_enabled, _x.autos.auto_heading_enabled, _x.autos.auto_xy_available, _x.autos.auto_depth_available, _x.autos.auto_heading_available, _x.enabled, _x.fwd_state.header.seq, _x.fwd_state.header.stamp.secs, _x.fwd_state.header.stamp.nsecs))
      _x = self.fwd_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d3I().pack(_x.fwd_state.timestep.secs, _x.fwd_state.timestep.nsecs, _x.fwd_state.error, _x.fwd_state.error_dot, _x.fwd_state.p_error, _x.fwd_state.i_error, _x.fwd_state.d_error, _x.fwd_state.p_term, _x.fwd_state.i_term, _x.fwd_state.d_term, _x.fwd_state.i_max, _x.fwd_state.i_min, _x.fwd_state.output, _x.stbd_state.header.seq, _x.stbd_state.header.stamp.secs, _x.stbd_state.header.stamp.nsecs))
      _x = self.stbd_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d3I().pack(_x.stbd_state.timestep.secs, _x.stbd_state.timestep.nsecs, _x.stbd_state.error, _x.stbd_state.error_dot, _x.stbd_state.p_error, _x.stbd_state.i_error, _x.stbd_state.d_error, _x.stbd_state.p_term, _x.stbd_state.i_term, _x.stbd_state.d_term, _x.stbd_state.i_max, _x.stbd_state.i_min, _x.stbd_state.output, _x.down_state.header.seq, _x.down_state.header.stamp.secs, _x.down_state.header.stamp.nsecs))
      _x = self.down_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d3I().pack(_x.down_state.timestep.secs, _x.down_state.timestep.nsecs, _x.down_state.error, _x.down_state.error_dot, _x.down_state.p_error, _x.down_state.i_error, _x.down_state.d_error, _x.down_state.p_term, _x.down_state.i_term, _x.down_state.d_term, _x.down_state.i_max, _x.down_state.i_min, _x.down_state.output, _x.heading_state.header.seq, _x.heading_state.header.stamp.secs, _x.heading_state.header.stamp.nsecs))
      _x = self.heading_state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2i11d().pack(_x.heading_state.timestep.secs, _x.heading_state.timestep.nsecs, _x.heading_state.error, _x.heading_state.error_dot, _x.heading_state.p_error, _x.heading_state.i_error, _x.heading_state.d_error, _x.heading_state.p_term, _x.heading_state.i_term, _x.heading_state.d_term, _x.heading_state.i_max, _x.heading_state.i_min, _x.heading_state.output))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.autos is None:
        self.autos = ds_control_msgs.msg.RovAutoState()
      if self.fwd_state is None:
        self.fwd_state = control_msgs.msg.PidState()
      if self.stbd_state is None:
        self.stbd_state = control_msgs.msg.PidState()
      if self.down_state is None:
        self.down_state = control_msgs.msg.PidState()
      if self.heading_state is None:
        self.heading_state = control_msgs.msg.PidState()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.ds_header.source_uuid = str[start:end]
      _x = self
      start = end
      end += 19
      (_x.autos.auto_xy_enabled, _x.autos.auto_depth_enabled, _x.autos.auto_heading_enabled, _x.autos.auto_xy_available, _x.autos.auto_depth_available, _x.autos.auto_heading_available, _x.enabled, _x.fwd_state.header.seq, _x.fwd_state.header.stamp.secs, _x.fwd_state.header.stamp.nsecs,) = _get_struct_7B3I().unpack(str[start:end])
      self.autos.auto_xy_enabled = bool(self.autos.auto_xy_enabled)
      self.autos.auto_depth_enabled = bool(self.autos.auto_depth_enabled)
      self.autos.auto_heading_enabled = bool(self.autos.auto_heading_enabled)
      self.autos.auto_xy_available = bool(self.autos.auto_xy_available)
      self.autos.auto_depth_available = bool(self.autos.auto_depth_available)
      self.autos.auto_heading_available = bool(self.autos.auto_heading_available)
      self.enabled = bool(self.enabled)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.fwd_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.fwd_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 108
      (_x.fwd_state.timestep.secs, _x.fwd_state.timestep.nsecs, _x.fwd_state.error, _x.fwd_state.error_dot, _x.fwd_state.p_error, _x.fwd_state.i_error, _x.fwd_state.d_error, _x.fwd_state.p_term, _x.fwd_state.i_term, _x.fwd_state.d_term, _x.fwd_state.i_max, _x.fwd_state.i_min, _x.fwd_state.output, _x.stbd_state.header.seq, _x.stbd_state.header.stamp.secs, _x.stbd_state.header.stamp.nsecs,) = _get_struct_2i11d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.stbd_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.stbd_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 108
      (_x.stbd_state.timestep.secs, _x.stbd_state.timestep.nsecs, _x.stbd_state.error, _x.stbd_state.error_dot, _x.stbd_state.p_error, _x.stbd_state.i_error, _x.stbd_state.d_error, _x.stbd_state.p_term, _x.stbd_state.i_term, _x.stbd_state.d_term, _x.stbd_state.i_max, _x.stbd_state.i_min, _x.stbd_state.output, _x.down_state.header.seq, _x.down_state.header.stamp.secs, _x.down_state.header.stamp.nsecs,) = _get_struct_2i11d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.down_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.down_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 108
      (_x.down_state.timestep.secs, _x.down_state.timestep.nsecs, _x.down_state.error, _x.down_state.error_dot, _x.down_state.p_error, _x.down_state.i_error, _x.down_state.d_error, _x.down_state.p_term, _x.down_state.i_term, _x.down_state.d_term, _x.down_state.i_max, _x.down_state.i_min, _x.down_state.output, _x.heading_state.header.seq, _x.heading_state.header.stamp.secs, _x.heading_state.header.stamp.nsecs,) = _get_struct_2i11d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.heading_state.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.heading_state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 96
      (_x.heading_state.timestep.secs, _x.heading_state.timestep.nsecs, _x.heading_state.error, _x.heading_state.error_dot, _x.heading_state.p_error, _x.heading_state.i_error, _x.heading_state.d_error, _x.heading_state.p_term, _x.heading_state.i_term, _x.heading_state.d_term, _x.heading_state.i_max, _x.heading_state.i_min, _x.heading_state.output,) = _get_struct_2i11d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_16B = None
def _get_struct_16B():
    global _struct_16B
    if _struct_16B is None:
        _struct_16B = struct.Struct("<16B")
    return _struct_16B
_struct_16s = None
def _get_struct_16s():
    global _struct_16s
    if _struct_16s is None:
        _struct_16s = struct.Struct("<16s")
    return _struct_16s
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_2i11d = None
def _get_struct_2i11d():
    global _struct_2i11d
    if _struct_2i11d is None:
        _struct_2i11d = struct.Struct("<2i11d")
    return _struct_2i11d
_struct_2i11d3I = None
def _get_struct_2i11d3I():
    global _struct_2i11d3I
    if _struct_2i11d3I is None:
        _struct_2i11d3I = struct.Struct("<2i11d3I")
    return _struct_2i11d3I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_7B3I = None
def _get_struct_7B3I():
    global _struct_7B3I
    if _struct_7B3I is None:
        _struct_7B3I = struct.Struct("<7B3I")
    return _struct_7B3I
