/*
 * Copyright 2015 Aldebaran
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef PUBLISHER_INFO_HPP
#define PUBLISHER_INFO_HPP

/**
* LOCAL includes
*/
#include "basic.hpp"
#include <alrosbridge/tools.hpp>

/**
* ROS includes
*/
#include <ros/ros.h>
#include <std_msgs/String.h>

namespace alros
{
namespace publisher
{

class InfoPublisher : public BasicPublisher<std_msgs::String>
{
public:
  InfoPublisher( const std::string& topic, Robot robot_type );

  void reset( ros::NodeHandle& nh );

  virtual inline bool isSubscribed() const
  {
    return true;
  }

protected:
  Robot robot_;
};

} //publisher
} //alros

#endif
