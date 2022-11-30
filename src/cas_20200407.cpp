// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cas_20200407.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Cas20200407;

Alibabacloud_Cas20200407::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "cas.aliyuncs.com"},
    {"ap-northeast-2-pop", "cas.aliyuncs.com"},
    {"ap-southeast-1", "cas.aliyuncs.com"},
    {"ap-southeast-3", "cas.aliyuncs.com"},
    {"ap-southeast-5", "cas.aliyuncs.com"},
    {"cn-beijing", "cas.aliyuncs.com"},
    {"cn-beijing-finance-1", "cas.aliyuncs.com"},
    {"cn-beijing-finance-pop", "cas.aliyuncs.com"},
    {"cn-beijing-gov-1", "cas.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "cas.aliyuncs.com"},
    {"cn-chengdu", "cas.aliyuncs.com"},
    {"cn-edge-1", "cas.aliyuncs.com"},
    {"cn-fujian", "cas.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "cas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "cas.aliyuncs.com"},
    {"cn-hangzhou-finance", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "cas.aliyuncs.com"},
    {"cn-hangzhou-test-306", "cas.aliyuncs.com"},
    {"cn-hongkong", "cas.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "cas.aliyuncs.com"},
    {"cn-huhehaote", "cas.aliyuncs.com"},
    {"cn-north-2-gov-1", "cas.aliyuncs.com"},
    {"cn-qingdao", "cas.aliyuncs.com"},
    {"cn-qingdao-nebula", "cas.aliyuncs.com"},
    {"cn-shanghai", "cas.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "cas.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "cas.aliyuncs.com"},
    {"cn-shanghai-finance-1", "cas.aliyuncs.com"},
    {"cn-shanghai-inner", "cas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "cas.aliyuncs.com"},
    {"cn-shenzhen", "cas.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "cas.aliyuncs.com"},
    {"cn-shenzhen-inner", "cas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "cas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "cas.aliyuncs.com"},
    {"cn-wuhan", "cas.aliyuncs.com"},
    {"cn-yushanfang", "cas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "cas.aliyuncs.com"},
    {"cn-zhangjiakou", "cas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "cas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "cas.aliyuncs.com"},
    {"eu-west-1", "cas.aliyuncs.com"},
    {"eu-west-1-oxs", "cas.aliyuncs.com"},
    {"rus-west-1-pop", "cas.aliyuncs.com"},
    {"us-east-1", "cas.aliyuncs.com"},
    {"us-west-1", "cas.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cas20200407::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CancelCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::cancelCertificateForPackageRequestWithOptions(shared_ptr<CancelCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelCertificateForPackageRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelCertificateForPackageRequestResponse(callApi(params, req, runtime));
}

CancelCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::cancelCertificateForPackageRequest(shared_ptr<CancelCertificateForPackageRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCertificateForPackageRequestWithOptions(request, runtime);
}

CancelOrderRequestResponse Alibabacloud_Cas20200407::Client::cancelOrderRequestWithOptions(shared_ptr<CancelOrderRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrderRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOrderRequestResponse(callApi(params, req, runtime));
}

CancelOrderRequestResponse Alibabacloud_Cas20200407::Client::cancelOrderRequest(shared_ptr<CancelOrderRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderRequestWithOptions(request, runtime);
}

CreateCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::createCertificateForPackageRequestWithOptions(shared_ptr<CreateCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    query->insert(pair<string, string>("CompanyName", *request->companyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validateType)) {
    query->insert(pair<string, string>("ValidateType", *request->validateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateForPackageRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateForPackageRequestResponse(callApi(params, req, runtime));
}

CreateCertificateForPackageRequestResponse Alibabacloud_Cas20200407::Client::createCertificateForPackageRequest(shared_ptr<CreateCertificateForPackageRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateForPackageRequestWithOptions(request, runtime);
}

CreateCertificateRequestResponse Alibabacloud_Cas20200407::Client::createCertificateRequestWithOptions(shared_ptr<CreateCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validateType)) {
    query->insert(pair<string, string>("ValidateType", *request->validateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateRequestResponse(callApi(params, req, runtime));
}

CreateCertificateRequestResponse Alibabacloud_Cas20200407::Client::createCertificateRequest(shared_ptr<CreateCertificateRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateRequestWithOptions(request, runtime);
}

CreateCertificateWithCsrRequestResponse Alibabacloud_Cas20200407::Client::createCertificateWithCsrRequestWithOptions(shared_ptr<CreateCertificateWithCsrRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validateType)) {
    query->insert(pair<string, string>("ValidateType", *request->validateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificateWithCsrRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateWithCsrRequestResponse(callApi(params, req, runtime));
}

CreateCertificateWithCsrRequestResponse Alibabacloud_Cas20200407::Client::createCertificateWithCsrRequest(shared_ptr<CreateCertificateWithCsrRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithCsrRequestWithOptions(request, runtime);
}

CreateWHClientCertificateResponse Alibabacloud_Cas20200407::Client::createWHClientCertificateWithOptions(shared_ptr<CreateWHClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->afterTime)) {
    query->insert(pair<string, long>("AfterTime", *request->afterTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beforeTime)) {
    query->insert(pair<string, long>("BeforeTime", *request->beforeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    query->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->days)) {
    query->insert(pair<string, long>("Days", *request->days));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediately)) {
    query->insert(pair<string, long>("Immediately", *request->immediately));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locality)) {
    query->insert(pair<string, string>("Locality", *request->locality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->months)) {
    query->insert(pair<string, long>("Months", *request->months));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organization)) {
    query->insert(pair<string, string>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnit)) {
    query->insert(pair<string, string>("OrganizationUnit", *request->organizationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    query->insert(pair<string, string>("ParentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sanType)) {
    query->insert(pair<string, long>("SanType", *request->sanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sanValue)) {
    query->insert(pair<string, string>("SanValue", *request->sanValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->years)) {
    query->insert(pair<string, long>("Years", *request->years));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWHClientCertificate"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWHClientCertificateResponse(callApi(params, req, runtime));
}

CreateWHClientCertificateResponse Alibabacloud_Cas20200407::Client::createWHClientCertificate(shared_ptr<CreateWHClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWHClientCertificateWithOptions(request, runtime);
}

DecryptResponse Alibabacloud_Cas20200407::Client::decryptWithOptions(shared_ptr<DecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    query->insert(pair<string, string>("MessageType", *request->messageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Decrypt"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DecryptResponse(callApi(params, req, runtime));
}

DecryptResponse Alibabacloud_Cas20200407::Client::decrypt(shared_ptr<DecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decryptWithOptions(request, runtime);
}

DeleteCertificateRequestResponse Alibabacloud_Cas20200407::Client::deleteCertificateRequestWithOptions(shared_ptr<DeleteCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCertificateRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCertificateRequestResponse(callApi(params, req, runtime));
}

DeleteCertificateRequestResponse Alibabacloud_Cas20200407::Client::deleteCertificateRequest(shared_ptr<DeleteCertificateRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertificateRequestWithOptions(request, runtime);
}

DeletePCACertResponse Alibabacloud_Cas20200407::Client::deletePCACertWithOptions(shared_ptr<DeletePCACertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePCACert"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePCACertResponse(callApi(params, req, runtime));
}

DeletePCACertResponse Alibabacloud_Cas20200407::Client::deletePCACert(shared_ptr<DeletePCACertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePCACertWithOptions(request, runtime);
}

DeleteUserCertificateResponse Alibabacloud_Cas20200407::Client::deleteUserCertificateWithOptions(shared_ptr<DeleteUserCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->certId)) {
    query->insert(pair<string, long>("CertId", *request->certId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserCertificate"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserCertificateResponse(callApi(params, req, runtime));
}

DeleteUserCertificateResponse Alibabacloud_Cas20200407::Client::deleteUserCertificate(shared_ptr<DeleteUserCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserCertificateWithOptions(request, runtime);
}

DescribeCertificateStateResponse Alibabacloud_Cas20200407::Client::describeCertificateStateWithOptions(shared_ptr<DescribeCertificateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertificateState"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertificateStateResponse(callApi(params, req, runtime));
}

DescribeCertificateStateResponse Alibabacloud_Cas20200407::Client::describeCertificateState(shared_ptr<DescribeCertificateStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificateStateWithOptions(request, runtime);
}

DescribePackageStateResponse Alibabacloud_Cas20200407::Client::describePackageStateWithOptions(shared_ptr<DescribePackageStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePackageState"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePackageStateResponse(callApi(params, req, runtime));
}

DescribePackageStateResponse Alibabacloud_Cas20200407::Client::describePackageState(shared_ptr<DescribePackageStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePackageStateWithOptions(request, runtime);
}

EncryptResponse Alibabacloud_Cas20200407::Client::encryptWithOptions(shared_ptr<EncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    query->insert(pair<string, string>("MessageType", *request->messageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plaintext)) {
    query->insert(pair<string, string>("Plaintext", *request->plaintext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Encrypt"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EncryptResponse(callApi(params, req, runtime));
}

EncryptResponse Alibabacloud_Cas20200407::Client::encrypt(shared_ptr<EncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encryptWithOptions(request, runtime);
}

GetCertWarehouseQuotaResponse Alibabacloud_Cas20200407::Client::getCertWarehouseQuotaWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCertWarehouseQuota"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCertWarehouseQuotaResponse(callApi(params, req, runtime));
}

GetCertWarehouseQuotaResponse Alibabacloud_Cas20200407::Client::getCertWarehouseQuota() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertWarehouseQuotaWithOptions(runtime);
}

GetUserCertificateDetailResponse Alibabacloud_Cas20200407::Client::getUserCertificateDetailWithOptions(shared_ptr<GetUserCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->certId)) {
    query->insert(pair<string, long>("CertId", *request->certId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserCertificateDetail"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserCertificateDetailResponse(callApi(params, req, runtime));
}

GetUserCertificateDetailResponse Alibabacloud_Cas20200407::Client::getUserCertificateDetail(shared_ptr<GetUserCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserCertificateDetailWithOptions(request, runtime);
}

ListCertResponse Alibabacloud_Cas20200407::Client::listCertWithOptions(shared_ptr<ListCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warehouseId)) {
    query->insert(pair<string, long>("WarehouseId", *request->warehouseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCert"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCertResponse(callApi(params, req, runtime));
}

ListCertResponse Alibabacloud_Cas20200407::Client::listCert(shared_ptr<ListCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCertWithOptions(request, runtime);
}

ListCertWarehouseResponse Alibabacloud_Cas20200407::Client::listCertWarehouseWithOptions(shared_ptr<ListCertWarehouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCertWarehouse"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCertWarehouseResponse(callApi(params, req, runtime));
}

ListCertWarehouseResponse Alibabacloud_Cas20200407::Client::listCertWarehouse(shared_ptr<ListCertWarehouseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCertWarehouseWithOptions(request, runtime);
}

ListUserCertificateOrderResponse Alibabacloud_Cas20200407::Client::listUserCertificateOrderWithOptions(shared_ptr<ListUserCertificateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showSize)) {
    query->insert(pair<string, long>("ShowSize", *request->showSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserCertificateOrder"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserCertificateOrderResponse(callApi(params, req, runtime));
}

ListUserCertificateOrderResponse Alibabacloud_Cas20200407::Client::listUserCertificateOrder(shared_ptr<ListUserCertificateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserCertificateOrderWithOptions(request, runtime);
}

RenewCertificateOrderForPackageRequestResponse Alibabacloud_Cas20200407::Client::renewCertificateOrderForPackageRequestWithOptions(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->csr)) {
    query->insert(pair<string, string>("Csr", *request->csr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewCertificateOrderForPackageRequest"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewCertificateOrderForPackageRequestResponse(callApi(params, req, runtime));
}

RenewCertificateOrderForPackageRequestResponse Alibabacloud_Cas20200407::Client::renewCertificateOrderForPackageRequest(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewCertificateOrderForPackageRequestWithOptions(request, runtime);
}

RevokeWHClientCertificateResponse Alibabacloud_Cas20200407::Client::revokeWHClientCertificateWithOptions(shared_ptr<RevokeWHClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeWHClientCertificate"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeWHClientCertificateResponse(callApi(params, req, runtime));
}

RevokeWHClientCertificateResponse Alibabacloud_Cas20200407::Client::revokeWHClientCertificate(shared_ptr<RevokeWHClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeWHClientCertificateWithOptions(request, runtime);
}

SignResponse Alibabacloud_Cas20200407::Client::signWithOptions(shared_ptr<SignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    query->insert(pair<string, string>("MessageType", *request->messageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signingAlgorithm)) {
    query->insert(pair<string, string>("SigningAlgorithm", *request->signingAlgorithm));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Sign"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SignResponse(callApi(params, req, runtime));
}

SignResponse Alibabacloud_Cas20200407::Client::sign(shared_ptr<SignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return signWithOptions(request, runtime);
}

UploadPCACertResponse Alibabacloud_Cas20200407::Client::uploadPCACertWithOptions(shared_ptr<UploadPCACertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cert)) {
    query->insert(pair<string, string>("Cert", *request->cert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warehouseId)) {
    query->insert(pair<string, long>("WarehouseId", *request->warehouseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadPCACert"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadPCACertResponse(callApi(params, req, runtime));
}

UploadPCACertResponse Alibabacloud_Cas20200407::Client::uploadPCACert(shared_ptr<UploadPCACertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadPCACertWithOptions(request, runtime);
}

UploadUserCertificateResponse Alibabacloud_Cas20200407::Client::uploadUserCertificateWithOptions(shared_ptr<UploadUserCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cert)) {
    query->insert(pair<string, string>("Cert", *request->cert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptCert)) {
    query->insert(pair<string, string>("EncryptCert", *request->encryptCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptPrivateKey)) {
    query->insert(pair<string, string>("EncryptPrivateKey", *request->encryptPrivateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signCert)) {
    query->insert(pair<string, string>("SignCert", *request->signCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signPrivateKey)) {
    query->insert(pair<string, string>("SignPrivateKey", *request->signPrivateKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadUserCertificate"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadUserCertificateResponse(callApi(params, req, runtime));
}

UploadUserCertificateResponse Alibabacloud_Cas20200407::Client::uploadUserCertificate(shared_ptr<UploadUserCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadUserCertificateWithOptions(request, runtime);
}

VerifyResponse Alibabacloud_Cas20200407::Client::verifyWithOptions(shared_ptr<VerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    query->insert(pair<string, string>("MessageType", *request->messageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureValue)) {
    query->insert(pair<string, string>("SignatureValue", *request->signatureValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signingAlgorithm)) {
    query->insert(pair<string, string>("SigningAlgorithm", *request->signingAlgorithm));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Verify"))},
    {"version", boost::any(string("2020-04-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyResponse(callApi(params, req, runtime));
}

VerifyResponse Alibabacloud_Cas20200407::Client::verify(shared_ptr<VerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyWithOptions(request, runtime);
}

