/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.38-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "AssetsConfigNetworkItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

AssetsConfigNetworkItem::AssetsConfigNetworkItem()
{
    m_Asset = utility::conversions::to_string_t("");
    m_TokenAddress = utility::conversions::to_string_t("");
    m_TokenAddressIsSet = false;
    m_DepositEnabled = false;
    m_DepositEnabledIsSet = false;
    m_WithdrawalEnabled = false;
    m_WithdrawalEnabledIsSet = false;
    m_WithdrawalFee = 0.0;
    m_WithdrawalFeeIsSet = false;
    m_MinFee = 0.0;
    m_MinFeeIsSet = false;
    m_MaxFee = 0.0;
    m_MaxFeeIsSet = false;
}

AssetsConfigNetworkItem::~AssetsConfigNetworkItem()
{
}

void AssetsConfigNetworkItem::validate()
{
    // TODO: implement validation
}

web::json::value AssetsConfigNetworkItem::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("asset")] = ModelBase::toJson(m_Asset);
    if(m_TokenAddressIsSet)
    {
        val[utility::conversions::to_string_t("tokenAddress")] = ModelBase::toJson(m_TokenAddress);
    }
    if(m_DepositEnabledIsSet)
    {
        val[utility::conversions::to_string_t("depositEnabled")] = ModelBase::toJson(m_DepositEnabled);
    }
    if(m_WithdrawalEnabledIsSet)
    {
        val[utility::conversions::to_string_t("withdrawalEnabled")] = ModelBase::toJson(m_WithdrawalEnabled);
    }
    if(m_WithdrawalFeeIsSet)
    {
        val[utility::conversions::to_string_t("withdrawalFee")] = ModelBase::toJson(m_WithdrawalFee);
    }
    if(m_MinFeeIsSet)
    {
        val[utility::conversions::to_string_t("minFee")] = ModelBase::toJson(m_MinFee);
    }
    if(m_MaxFeeIsSet)
    {
        val[utility::conversions::to_string_t("maxFee")] = ModelBase::toJson(m_MaxFee);
    }

    return val;
}

void AssetsConfigNetworkItem::fromJson(web::json::value& val)
{
    setAsset(ModelBase::stringFromJson(val[utility::conversions::to_string_t("asset")]));
    if(val.has_field(utility::conversions::to_string_t("tokenAddress")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("tokenAddress")];
        if(!fieldValue.is_null())
        {
            setTokenAddress(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depositEnabled")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("depositEnabled")];
        if(!fieldValue.is_null())
        {
            setDepositEnabled(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("withdrawalEnabled")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("withdrawalEnabled")];
        if(!fieldValue.is_null())
        {
            setWithdrawalEnabled(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("withdrawalFee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("withdrawalFee")];
        if(!fieldValue.is_null())
        {
            setWithdrawalFee(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minFee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("minFee")];
        if(!fieldValue.is_null())
        {
            setMinFee(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxFee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("maxFee")];
        if(!fieldValue.is_null())
        {
            setMaxFee(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void AssetsConfigNetworkItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("asset"), m_Asset));
    if(m_TokenAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tokenAddress"), m_TokenAddress));
        
    }
    if(m_DepositEnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("depositEnabled"), m_DepositEnabled));
    }
    if(m_WithdrawalEnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("withdrawalEnabled"), m_WithdrawalEnabled));
    }
    if(m_WithdrawalFeeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("withdrawalFee"), m_WithdrawalFee));
    }
    if(m_MinFeeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minFee"), m_MinFee));
    }
    if(m_MaxFeeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxFee"), m_MaxFee));
    }
}

void AssetsConfigNetworkItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAsset(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("asset"))));
    if(multipart->hasContent(utility::conversions::to_string_t("tokenAddress")))
    {
        setTokenAddress(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tokenAddress"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("depositEnabled")))
    {
        setDepositEnabled(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("depositEnabled"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("withdrawalEnabled")))
    {
        setWithdrawalEnabled(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("withdrawalEnabled"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("withdrawalFee")))
    {
        setWithdrawalFee(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("withdrawalFee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minFee")))
    {
        setMinFee(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("minFee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxFee")))
    {
        setMaxFee(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxFee"))));
    }
}

utility::string_t AssetsConfigNetworkItem::getAsset() const
{
    return m_Asset;
}


void AssetsConfigNetworkItem::setAsset(utility::string_t value)
{
    m_Asset = value;
    
}
utility::string_t AssetsConfigNetworkItem::getTokenAddress() const
{
    return m_TokenAddress;
}


void AssetsConfigNetworkItem::setTokenAddress(utility::string_t value)
{
    m_TokenAddress = value;
    m_TokenAddressIsSet = true;
}
bool AssetsConfigNetworkItem::tokenAddressIsSet() const
{
    return m_TokenAddressIsSet;
}

void AssetsConfigNetworkItem::unsetTokenAddress()
{
    m_TokenAddressIsSet = false;
}

bool AssetsConfigNetworkItem::isDepositEnabled() const
{
    return m_DepositEnabled;
}


void AssetsConfigNetworkItem::setDepositEnabled(bool value)
{
    m_DepositEnabled = value;
    m_DepositEnabledIsSet = true;
}
bool AssetsConfigNetworkItem::depositEnabledIsSet() const
{
    return m_DepositEnabledIsSet;
}

void AssetsConfigNetworkItem::unsetDepositEnabled()
{
    m_DepositEnabledIsSet = false;
}

bool AssetsConfigNetworkItem::isWithdrawalEnabled() const
{
    return m_WithdrawalEnabled;
}


void AssetsConfigNetworkItem::setWithdrawalEnabled(bool value)
{
    m_WithdrawalEnabled = value;
    m_WithdrawalEnabledIsSet = true;
}
bool AssetsConfigNetworkItem::withdrawalEnabledIsSet() const
{
    return m_WithdrawalEnabledIsSet;
}

void AssetsConfigNetworkItem::unsetWithdrawalEnabled()
{
    m_WithdrawalEnabledIsSet = false;
}

double AssetsConfigNetworkItem::getWithdrawalFee() const
{
    return m_WithdrawalFee;
}


void AssetsConfigNetworkItem::setWithdrawalFee(double value)
{
    m_WithdrawalFee = value;
    m_WithdrawalFeeIsSet = true;
}
bool AssetsConfigNetworkItem::withdrawalFeeIsSet() const
{
    return m_WithdrawalFeeIsSet;
}

void AssetsConfigNetworkItem::unsetWithdrawalFee()
{
    m_WithdrawalFeeIsSet = false;
}

double AssetsConfigNetworkItem::getMinFee() const
{
    return m_MinFee;
}


void AssetsConfigNetworkItem::setMinFee(double value)
{
    m_MinFee = value;
    m_MinFeeIsSet = true;
}
bool AssetsConfigNetworkItem::minFeeIsSet() const
{
    return m_MinFeeIsSet;
}

void AssetsConfigNetworkItem::unsetMinFee()
{
    m_MinFeeIsSet = false;
}

double AssetsConfigNetworkItem::getMaxFee() const
{
    return m_MaxFee;
}


void AssetsConfigNetworkItem::setMaxFee(double value)
{
    m_MaxFee = value;
    m_MaxFeeIsSet = true;
}
bool AssetsConfigNetworkItem::maxFeeIsSet() const
{
    return m_MaxFeeIsSet;
}

void AssetsConfigNetworkItem::unsetMaxFee()
{
    m_MaxFeeIsSet = false;
}

}
}
}
}
