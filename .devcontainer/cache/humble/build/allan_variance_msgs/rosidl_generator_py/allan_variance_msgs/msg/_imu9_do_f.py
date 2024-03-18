# generated from rosidl_generator_py/resource/_idl.py.em
# with input from allan_variance_msgs:msg/Imu9DoF.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Imu9DoF(type):
    """Metaclass of message 'Imu9DoF'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('allan_variance_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'allan_variance_msgs.msg.Imu9DoF')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu9_do_f
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu9_do_f
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu9_do_f
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu9_do_f
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu9_do_f

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Imu9DoF(metaclass=Metaclass_Imu9DoF):
    """Message class 'Imu9DoF'."""

    __slots__ = [
        '_header',
        '_angular_velocity',
        '_linear_acceleration',
        '_magnetic_field',
        '_magnetic_data_updated',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angular_velocity': 'geometry_msgs/Vector3',
        'linear_acceleration': 'geometry_msgs/Vector3',
        'magnetic_field': 'geometry_msgs/Vector3',
        'magnetic_data_updated': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.linear_acceleration = kwargs.get('linear_acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.magnetic_field = kwargs.get('magnetic_field', Vector3())
        self.magnetic_data_updated = kwargs.get('magnetic_data_updated', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if self.magnetic_field != other.magnetic_field:
            return False
        if self.magnetic_data_updated != other.magnetic_data_updated:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity' field must be a sub message of type 'Vector3'"
        self._angular_velocity = value

    @builtins.property
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_acceleration' field must be a sub message of type 'Vector3'"
        self._linear_acceleration = value

    @builtins.property
    def magnetic_field(self):
        """Message field 'magnetic_field'."""
        return self._magnetic_field

    @magnetic_field.setter
    def magnetic_field(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'magnetic_field' field must be a sub message of type 'Vector3'"
        self._magnetic_field = value

    @builtins.property
    def magnetic_data_updated(self):
        """Message field 'magnetic_data_updated'."""
        return self._magnetic_data_updated

    @magnetic_data_updated.setter
    def magnetic_data_updated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'magnetic_data_updated' field must be of type 'bool'"
        self._magnetic_data_updated = value
