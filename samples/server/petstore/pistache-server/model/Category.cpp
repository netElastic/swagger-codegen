/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "Category.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

Category::Category()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    
}

Category::~Category()
{
}

void Category::validate()
{
    // TODO: implement validation
}

nlohmann::json Category::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_IdIsSet)
    {
        val["id"] = m_Id;
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    

    return val;
}

void Category::fromJson(nlohmann::json& val)
{
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
        
    }
    
}


int64_t Category::getId() const
{
    return m_Id;
}
void Category::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Category::idIsSet() const
{
    return m_IdIsSet;
}
void Category::unsetId()
{
    m_IdIsSet = false;
}
std::string Category::getName() const
{
    return m_Name;
}
void Category::setName(std::string value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Category::nameIsSet() const
{
    return m_NameIsSet;
}
void Category::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

