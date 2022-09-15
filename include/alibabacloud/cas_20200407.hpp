// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAS20200407_H_
#define ALIBABACLOUD_CAS20200407_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cas20200407 {
class CancelCertificateForPackageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  CancelCertificateForPackageRequestRequest() {}

  explicit CancelCertificateForPackageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CancelCertificateForPackageRequestRequest() = default;
};
class CancelCertificateForPackageRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelCertificateForPackageRequestResponseBody() {}

  explicit CancelCertificateForPackageRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelCertificateForPackageRequestResponseBody() = default;
};
class CancelCertificateForPackageRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelCertificateForPackageRequestResponseBody> body{};

  CancelCertificateForPackageRequestResponse() {}

  explicit CancelCertificateForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelCertificateForPackageRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCertificateForPackageRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCertificateForPackageRequestResponse() = default;
};
class CancelOrderRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  CancelOrderRequestRequest() {}

  explicit CancelOrderRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CancelOrderRequestRequest() = default;
};
class CancelOrderRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelOrderRequestResponseBody() {}

  explicit CancelOrderRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelOrderRequestResponseBody() = default;
};
class CancelOrderRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOrderRequestResponseBody> body{};

  CancelOrderRequestResponse() {}

  explicit CancelOrderRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelOrderRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderRequestResponse() = default;
};
class CreateCertificateForPackageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyName{};
  shared_ptr<string> csr{};
  shared_ptr<string> domain{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<string> productCode{};
  shared_ptr<string> username{};
  shared_ptr<string> validateType{};

  CreateCertificateForPackageRequestRequest() {}

  explicit CreateCertificateForPackageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~CreateCertificateForPackageRequestRequest() = default;
};
class CreateCertificateForPackageRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateCertificateForPackageRequestResponseBody() {}

  explicit CreateCertificateForPackageRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateForPackageRequestResponseBody() = default;
};
class CreateCertificateForPackageRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateForPackageRequestResponseBody> body{};

  CreateCertificateForPackageRequestResponse() {}

  explicit CreateCertificateForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCertificateForPackageRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateForPackageRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateForPackageRequestResponse() = default;
};
class CreateCertificateRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<string> productCode{};
  shared_ptr<string> username{};
  shared_ptr<string> validateType{};

  CreateCertificateRequestRequest() {}

  explicit CreateCertificateRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~CreateCertificateRequestRequest() = default;
};
class CreateCertificateRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateCertificateRequestResponseBody() {}

  explicit CreateCertificateRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateRequestResponseBody() = default;
};
class CreateCertificateRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateRequestResponseBody> body{};

  CreateCertificateRequestResponse() {}

  explicit CreateCertificateRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCertificateRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateRequestResponse() = default;
};
class CreateCertificateWithCsrRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<string> productCode{};
  shared_ptr<string> username{};
  shared_ptr<string> validateType{};

  CreateCertificateWithCsrRequestRequest() {}

  explicit CreateCertificateWithCsrRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~CreateCertificateWithCsrRequestRequest() = default;
};
class CreateCertificateWithCsrRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateCertificateWithCsrRequestResponseBody() {}

  explicit CreateCertificateWithCsrRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateWithCsrRequestResponseBody() = default;
};
class CreateCertificateWithCsrRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateWithCsrRequestResponseBody> body{};

  CreateCertificateWithCsrRequestResponse() {}

  explicit CreateCertificateWithCsrRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCertificateWithCsrRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateWithCsrRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateWithCsrRequestResponse() = default;
};
class DeleteCertificateRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  DeleteCertificateRequestRequest() {}

  explicit DeleteCertificateRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~DeleteCertificateRequestRequest() = default;
};
class DeleteCertificateRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCertificateRequestResponseBody() {}

  explicit DeleteCertificateRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCertificateRequestResponseBody() = default;
};
class DeleteCertificateRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCertificateRequestResponseBody> body{};

  DeleteCertificateRequestResponse() {}

  explicit DeleteCertificateRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCertificateRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCertificateRequestResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCertificateRequestResponse() = default;
};
class DeletePCACertRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DeletePCACertRequest() {}

  explicit DeletePCACertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
  }


  virtual ~DeletePCACertRequest() = default;
};
class DeletePCACertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePCACertResponseBody() {}

  explicit DeletePCACertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePCACertResponseBody() = default;
};
class DeletePCACertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePCACertResponseBody> body{};

  DeletePCACertResponse() {}

  explicit DeletePCACertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePCACertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePCACertResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePCACertResponse() = default;
};
class DescribeCertificateStateRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  DescribeCertificateStateRequest() {}

  explicit DescribeCertificateStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~DescribeCertificateStateRequest() = default;
};
class DescribeCertificateStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> content{};
  shared_ptr<string> domain{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> recordDomain{};
  shared_ptr<string> recordType{};
  shared_ptr<string> recordValue{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};
  shared_ptr<string> validateType{};

  DescribeCertificateStateResponseBody() {}

  explicit DescribeCertificateStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (recordDomain) {
      res["RecordDomain"] = boost::any(*recordDomain);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (recordValue) {
      res["RecordValue"] = boost::any(*recordValue);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("RecordDomain") != m.end() && !m["RecordDomain"].empty()) {
      recordDomain = make_shared<string>(boost::any_cast<string>(m["RecordDomain"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("RecordValue") != m.end() && !m["RecordValue"].empty()) {
      recordValue = make_shared<string>(boost::any_cast<string>(m["RecordValue"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~DescribeCertificateStateResponseBody() = default;
};
class DescribeCertificateStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCertificateStateResponseBody> body{};

  DescribeCertificateStateResponse() {}

  explicit DescribeCertificateStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCertificateStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertificateStateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertificateStateResponse() = default;
};
class DescribePackageStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};

  DescribePackageStateRequest() {}

  explicit DescribePackageStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribePackageStateRequest() = default;
};
class DescribePackageStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> issuedCount{};
  shared_ptr<string> productCode{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> usedCount{};

  DescribePackageStateResponseBody() {}

  explicit DescribePackageStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issuedCount) {
      res["IssuedCount"] = boost::any(*issuedCount);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (usedCount) {
      res["UsedCount"] = boost::any(*usedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssuedCount") != m.end() && !m["IssuedCount"].empty()) {
      issuedCount = make_shared<long>(boost::any_cast<long>(m["IssuedCount"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UsedCount") != m.end() && !m["UsedCount"].empty()) {
      usedCount = make_shared<long>(boost::any_cast<long>(m["UsedCount"]));
    }
  }


  virtual ~DescribePackageStateResponseBody() = default;
};
class DescribePackageStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackageStateResponseBody> body{};

  DescribePackageStateResponse() {}

  explicit DescribePackageStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePackageStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackageStateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackageStateResponse() = default;
};
class ListCertRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> showSize{};
  shared_ptr<string> status{};
  shared_ptr<long> warehouseId{};

  ListCertRequest() {}

  explicit ListCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (warehouseId) {
      res["WarehouseId"] = boost::any(*warehouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WarehouseId") != m.end() && !m["WarehouseId"].empty()) {
      warehouseId = make_shared<long>(boost::any_cast<long>(m["WarehouseId"]));
    }
  }


  virtual ~ListCertRequest() = default;
};
class ListCertResponseBodyCertList : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> commonName{};
  shared_ptr<bool> existPrivateKey{};
  shared_ptr<string> identifier{};
  shared_ptr<string> issuer{};
  shared_ptr<string> sans{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> status{};
  shared_ptr<long> whId{};
  shared_ptr<string> whInstanceId{};

  ListCertResponseBodyCertList() {}

  explicit ListCertResponseBodyCertList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (existPrivateKey) {
      res["ExistPrivateKey"] = boost::any(*existPrivateKey);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (whId) {
      res["WhId"] = boost::any(*whId);
    }
    if (whInstanceId) {
      res["WhInstanceId"] = boost::any(*whInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("ExistPrivateKey") != m.end() && !m["ExistPrivateKey"].empty()) {
      existPrivateKey = make_shared<bool>(boost::any_cast<bool>(m["ExistPrivateKey"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WhId") != m.end() && !m["WhId"].empty()) {
      whId = make_shared<long>(boost::any_cast<long>(m["WhId"]));
    }
    if (m.find("WhInstanceId") != m.end() && !m["WhInstanceId"].empty()) {
      whInstanceId = make_shared<string>(boost::any_cast<string>(m["WhInstanceId"]));
    }
  }


  virtual ~ListCertResponseBodyCertList() = default;
};
class ListCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCertResponseBodyCertList>> certList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListCertResponseBody() {}

  explicit ListCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certList) {
      vector<boost::any> temp1;
      for(auto item1:*certList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertList") != m.end() && !m["CertList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertList"].type()) {
        vector<ListCertResponseBodyCertList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCertResponseBodyCertList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certList = make_shared<vector<ListCertResponseBodyCertList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCertResponseBody() = default;
};
class ListCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCertResponseBody> body{};

  ListCertResponse() {}

  explicit ListCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCertResponseBody>(model1);
      }
    }
  }


  virtual ~ListCertResponse() = default;
};
class ListCertWarehouseRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> showSize{};
  shared_ptr<string> type{};

  ListCertWarehouseRequest() {}

  explicit ListCertWarehouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListCertWarehouseRequest() = default;
};
class ListCertWarehouseResponseBodyCertWarehouseList : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> name{};
  shared_ptr<string> pcaInstanceId{};
  shared_ptr<long> qps{};
  shared_ptr<string> type{};
  shared_ptr<long> whId{};

  ListCertWarehouseResponseBodyCertWarehouseList() {}

  explicit ListCertWarehouseResponseBodyCertWarehouseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pcaInstanceId) {
      res["PcaInstanceId"] = boost::any(*pcaInstanceId);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (whId) {
      res["WhId"] = boost::any(*whId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PcaInstanceId") != m.end() && !m["PcaInstanceId"].empty()) {
      pcaInstanceId = make_shared<string>(boost::any_cast<string>(m["PcaInstanceId"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["Qps"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WhId") != m.end() && !m["WhId"].empty()) {
      whId = make_shared<long>(boost::any_cast<long>(m["WhId"]));
    }
  }


  virtual ~ListCertWarehouseResponseBodyCertWarehouseList() = default;
};
class ListCertWarehouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCertWarehouseResponseBodyCertWarehouseList>> certWarehouseList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListCertWarehouseResponseBody() {}

  explicit ListCertWarehouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certWarehouseList) {
      vector<boost::any> temp1;
      for(auto item1:*certWarehouseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertWarehouseList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertWarehouseList") != m.end() && !m["CertWarehouseList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertWarehouseList"].type()) {
        vector<ListCertWarehouseResponseBodyCertWarehouseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertWarehouseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCertWarehouseResponseBodyCertWarehouseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certWarehouseList = make_shared<vector<ListCertWarehouseResponseBodyCertWarehouseList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCertWarehouseResponseBody() = default;
};
class ListCertWarehouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCertWarehouseResponseBody> body{};

  ListCertWarehouseResponse() {}

  explicit ListCertWarehouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCertWarehouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCertWarehouseResponseBody>(model1);
      }
    }
  }


  virtual ~ListCertWarehouseResponse() = default;
};
class ListUserCertificateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyword{};
  shared_ptr<string> orderType{};
  shared_ptr<long> showSize{};
  shared_ptr<string> status{};

  ListUserCertificateOrderRequest() {}

  explicit ListUserCertificateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListUserCertificateOrderRequest() = default;
};
class ListUserCertificateOrderResponseBodyCertificateOrderList : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> aliyunOrderId{};
  shared_ptr<long> buyDate{};
  shared_ptr<long> certEndTime{};
  shared_ptr<long> certStartTime{};
  shared_ptr<string> certType{};
  shared_ptr<string> domain{};
  shared_ptr<long> domainCount{};
  shared_ptr<string> domainType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> partnerOrderId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> rootBrand{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> trusteeStatus{};
  shared_ptr<long> wildDomainCount{};

  ListUserCertificateOrderResponseBodyCertificateOrderList() {}

  explicit ListUserCertificateOrderResponseBodyCertificateOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (aliyunOrderId) {
      res["AliyunOrderId"] = boost::any(*aliyunOrderId);
    }
    if (buyDate) {
      res["BuyDate"] = boost::any(*buyDate);
    }
    if (certEndTime) {
      res["CertEndTime"] = boost::any(*certEndTime);
    }
    if (certStartTime) {
      res["CertStartTime"] = boost::any(*certStartTime);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (partnerOrderId) {
      res["PartnerOrderId"] = boost::any(*partnerOrderId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (rootBrand) {
      res["RootBrand"] = boost::any(*rootBrand);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trusteeStatus) {
      res["TrusteeStatus"] = boost::any(*trusteeStatus);
    }
    if (wildDomainCount) {
      res["WildDomainCount"] = boost::any(*wildDomainCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("AliyunOrderId") != m.end() && !m["AliyunOrderId"].empty()) {
      aliyunOrderId = make_shared<long>(boost::any_cast<long>(m["AliyunOrderId"]));
    }
    if (m.find("BuyDate") != m.end() && !m["BuyDate"].empty()) {
      buyDate = make_shared<long>(boost::any_cast<long>(m["BuyDate"]));
    }
    if (m.find("CertEndTime") != m.end() && !m["CertEndTime"].empty()) {
      certEndTime = make_shared<long>(boost::any_cast<long>(m["CertEndTime"]));
    }
    if (m.find("CertStartTime") != m.end() && !m["CertStartTime"].empty()) {
      certStartTime = make_shared<long>(boost::any_cast<long>(m["CertStartTime"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<long>(boost::any_cast<long>(m["DomainCount"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("PartnerOrderId") != m.end() && !m["PartnerOrderId"].empty()) {
      partnerOrderId = make_shared<string>(boost::any_cast<string>(m["PartnerOrderId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("RootBrand") != m.end() && !m["RootBrand"].empty()) {
      rootBrand = make_shared<string>(boost::any_cast<string>(m["RootBrand"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrusteeStatus") != m.end() && !m["TrusteeStatus"].empty()) {
      trusteeStatus = make_shared<string>(boost::any_cast<string>(m["TrusteeStatus"]));
    }
    if (m.find("WildDomainCount") != m.end() && !m["WildDomainCount"].empty()) {
      wildDomainCount = make_shared<long>(boost::any_cast<long>(m["WildDomainCount"]));
    }
  }


  virtual ~ListUserCertificateOrderResponseBodyCertificateOrderList() = default;
};
class ListUserCertificateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserCertificateOrderResponseBodyCertificateOrderList>> certificateOrderList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListUserCertificateOrderResponseBody() {}

  explicit ListUserCertificateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*certificateOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateOrderList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateOrderList") != m.end() && !m["CertificateOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateOrderList"].type()) {
        vector<ListUserCertificateOrderResponseBodyCertificateOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserCertificateOrderResponseBodyCertificateOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateOrderList = make_shared<vector<ListUserCertificateOrderResponseBodyCertificateOrderList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserCertificateOrderResponseBody() = default;
};
class ListUserCertificateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserCertificateOrderResponseBody> body{};

  ListUserCertificateOrderResponse() {}

  explicit ListUserCertificateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserCertificateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserCertificateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserCertificateOrderResponse() = default;
};
class RenewCertificateOrderForPackageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<long> orderId{};

  RenewCertificateOrderForPackageRequestRequest() {}

  explicit RenewCertificateOrderForPackageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~RenewCertificateOrderForPackageRequestRequest() = default;
};
class RenewCertificateOrderForPackageRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  RenewCertificateOrderForPackageRequestResponseBody() {}

  explicit RenewCertificateOrderForPackageRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewCertificateOrderForPackageRequestResponseBody() = default;
};
class RenewCertificateOrderForPackageRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewCertificateOrderForPackageRequestResponseBody> body{};

  RenewCertificateOrderForPackageRequestResponse() {}

  explicit RenewCertificateOrderForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RenewCertificateOrderForPackageRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewCertificateOrderForPackageRequestResponseBody>(model1);
      }
    }
  }


  virtual ~RenewCertificateOrderForPackageRequestResponse() = default;
};
class SignRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> message{};
  shared_ptr<string> messageType{};
  shared_ptr<string> signingAlgorithm{};

  SignRequest() {}

  explicit SignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (signingAlgorithm) {
      res["SigningAlgorithm"] = boost::any(*signingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("SigningAlgorithm") != m.end() && !m["SigningAlgorithm"].empty()) {
      signingAlgorithm = make_shared<string>(boost::any_cast<string>(m["SigningAlgorithm"]));
    }
  }


  virtual ~SignRequest() = default;
};
class SignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  SignResponseBody() {}

  explicit SignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~SignResponseBody() = default;
};
class SignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SignResponseBody> body{};

  SignResponse() {}

  explicit SignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SignResponseBody>(model1);
      }
    }
  }


  virtual ~SignResponse() = default;
};
class UploadPCACertRequest : public Darabonba::Model {
public:
  shared_ptr<string> cert{};
  shared_ptr<string> name{};
  shared_ptr<string> privateKey{};
  shared_ptr<long> warehouseId{};

  UploadPCACertRequest() {}

  explicit UploadPCACertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (warehouseId) {
      res["WarehouseId"] = boost::any(*warehouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("WarehouseId") != m.end() && !m["WarehouseId"].empty()) {
      warehouseId = make_shared<long>(boost::any_cast<long>(m["WarehouseId"]));
    }
  }


  virtual ~UploadPCACertRequest() = default;
};
class UploadPCACertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UploadPCACertResponseBody() {}

  explicit UploadPCACertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadPCACertResponseBody() = default;
};
class UploadPCACertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadPCACertResponseBody> body{};

  UploadPCACertResponse() {}

  explicit UploadPCACertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UploadPCACertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadPCACertResponseBody>(model1);
      }
    }
  }


  virtual ~UploadPCACertResponse() = default;
};
class VerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> message{};
  shared_ptr<string> messageType{};
  shared_ptr<string> signatureValue{};
  shared_ptr<string> signingAlgorithm{};

  VerifyRequest() {}

  explicit VerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    if (signingAlgorithm) {
      res["SigningAlgorithm"] = boost::any(*signingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
    if (m.find("SigningAlgorithm") != m.end() && !m["SigningAlgorithm"].empty()) {
      signingAlgorithm = make_shared<string>(boost::any_cast<string>(m["SigningAlgorithm"]));
    }
  }


  virtual ~VerifyRequest() = default;
};
class VerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> signatureValid{};

  VerifyResponseBody() {}

  explicit VerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signatureValid) {
      res["SignatureValid"] = boost::any(*signatureValid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignatureValid") != m.end() && !m["SignatureValid"].empty()) {
      signatureValid = make_shared<bool>(boost::any_cast<bool>(m["SignatureValid"]));
    }
  }


  virtual ~VerifyResponseBody() = default;
};
class VerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyResponseBody> body{};

  VerifyResponse() {}

  explicit VerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequestWithOptions(shared_ptr<CancelCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequest(shared_ptr<CancelCertificateForPackageRequestRequest> request);
  CancelOrderRequestResponse cancelOrderRequestWithOptions(shared_ptr<CancelOrderRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderRequestResponse cancelOrderRequest(shared_ptr<CancelOrderRequestRequest> request);
  CreateCertificateForPackageRequestResponse createCertificateForPackageRequestWithOptions(shared_ptr<CreateCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateForPackageRequestResponse createCertificateForPackageRequest(shared_ptr<CreateCertificateForPackageRequestRequest> request);
  CreateCertificateRequestResponse createCertificateRequestWithOptions(shared_ptr<CreateCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateRequestResponse createCertificateRequest(shared_ptr<CreateCertificateRequestRequest> request);
  CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequestWithOptions(shared_ptr<CreateCertificateWithCsrRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequest(shared_ptr<CreateCertificateWithCsrRequestRequest> request);
  DeleteCertificateRequestResponse deleteCertificateRequestWithOptions(shared_ptr<DeleteCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCertificateRequestResponse deleteCertificateRequest(shared_ptr<DeleteCertificateRequestRequest> request);
  DeletePCACertResponse deletePCACertWithOptions(shared_ptr<DeletePCACertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePCACertResponse deletePCACert(shared_ptr<DeletePCACertRequest> request);
  DescribeCertificateStateResponse describeCertificateStateWithOptions(shared_ptr<DescribeCertificateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificateStateResponse describeCertificateState(shared_ptr<DescribeCertificateStateRequest> request);
  DescribePackageStateResponse describePackageStateWithOptions(shared_ptr<DescribePackageStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackageStateResponse describePackageState(shared_ptr<DescribePackageStateRequest> request);
  ListCertResponse listCertWithOptions(shared_ptr<ListCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCertResponse listCert(shared_ptr<ListCertRequest> request);
  ListCertWarehouseResponse listCertWarehouseWithOptions(shared_ptr<ListCertWarehouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCertWarehouseResponse listCertWarehouse(shared_ptr<ListCertWarehouseRequest> request);
  ListUserCertificateOrderResponse listUserCertificateOrderWithOptions(shared_ptr<ListUserCertificateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserCertificateOrderResponse listUserCertificateOrder(shared_ptr<ListUserCertificateOrderRequest> request);
  RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequestWithOptions(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequest(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request);
  SignResponse signWithOptions(shared_ptr<SignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SignResponse sign(shared_ptr<SignRequest> request);
  UploadPCACertResponse uploadPCACertWithOptions(shared_ptr<UploadPCACertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadPCACertResponse uploadPCACert(shared_ptr<UploadPCACertRequest> request);
  VerifyResponse verifyWithOptions(shared_ptr<VerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyResponse verify(shared_ptr<VerifyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cas20200407

#endif
