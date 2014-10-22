/**
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!
 */

#ifndef _ABSTRACTWEBTHREESTUBSERVER_H_
#define _ABSTRACTWEBTHREESTUBSERVER_H_

#include <jsonrpc/rpc.h>

class AbstractWebThreeStubServer : public jsonrpc::AbstractServer<AbstractWebThreeStubServer>
{
    public:
        AbstractWebThreeStubServer(jsonrpc::AbstractServerConnector* conn) :
            jsonrpc::AbstractServer<AbstractWebThreeStubServer>(conn) 
        {
            this->bindAndAddMethod(new jsonrpc::Procedure("accounts", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &AbstractWebThreeStubServer::accountsI);
            this->bindAndAddMethod(new jsonrpc::Procedure("balanceAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::balanceAtI);
            this->bindAndAddMethod(new jsonrpc::Procedure("blockByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::blockByHashI);
            this->bindAndAddMethod(new jsonrpc::Procedure("blockByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::blockByNumberI);
            this->bindAndAddMethod(new jsonrpc::Procedure("call", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &AbstractWebThreeStubServer::callI);
            this->bindAndAddMethod(new jsonrpc::Procedure("check", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_BOOLEAN, "id",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::checkI);
            this->bindAndAddMethod(new jsonrpc::Procedure("codeAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::codeAtI);
            this->bindAndAddMethod(new jsonrpc::Procedure("coinbase", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &AbstractWebThreeStubServer::coinbaseI);
            this->bindAndAddMethod(new jsonrpc::Procedure("compile", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::compileI);
            this->bindAndAddMethod(new jsonrpc::Procedure("countAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_REAL, "param1",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::countAtI);
            this->bindAndAddMethod(new jsonrpc::Procedure("defaultBlock", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_INTEGER,  NULL), &AbstractWebThreeStubServer::defaultBlockI);
            this->bindAndAddMethod(new jsonrpc::Procedure("gasPrice", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &AbstractWebThreeStubServer::gasPriceI);
            this->bindAndAddMethod(new jsonrpc::Procedure("killWatch", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_BOOLEAN, "id",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::killWatchI);
            this->bindAndAddMethod(new jsonrpc::Procedure("listening", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN,  NULL), &AbstractWebThreeStubServer::listeningI);
            this->bindAndAddMethod(new jsonrpc::Procedure("messages", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_ARRAY, "params",jsonrpc::JSON_OBJECT, NULL), &AbstractWebThreeStubServer::messagesI);
            this->bindAndAddMethod(new jsonrpc::Procedure("mining", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN,  NULL), &AbstractWebThreeStubServer::miningI);
            this->bindAndAddMethod(new jsonrpc::Procedure("number", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_INTEGER,  NULL), &AbstractWebThreeStubServer::numberI);
            this->bindAndAddMethod(new jsonrpc::Procedure("peerCount", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_INTEGER,  NULL), &AbstractWebThreeStubServer::peerCountI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setCoinbase", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::setCoinbaseI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setListening", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_BOOLEAN, NULL), &AbstractWebThreeStubServer::setListeningI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setMining", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_BOOLEAN, NULL), &AbstractWebThreeStubServer::setMiningI);
            this->bindAndAddMethod(new jsonrpc::Procedure("stateAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::stateAtI);
            this->bindAndAddMethod(new jsonrpc::Procedure("transact", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_OBJECT, NULL), &AbstractWebThreeStubServer::transactI);
            this->bindAndAddMethod(new jsonrpc::Procedure("transactionByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::transactionByHashI);
            this->bindAndAddMethod(new jsonrpc::Procedure("transactionByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_INTEGER,"param2",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::transactionByNumberI);
            this->bindAndAddMethod(new jsonrpc::Procedure("uncleByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::uncleByHashI);
            this->bindAndAddMethod(new jsonrpc::Procedure("uncleByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_INTEGER,"param2",jsonrpc::JSON_INTEGER, NULL), &AbstractWebThreeStubServer::uncleByNumberI);
            this->bindAndAddMethod(new jsonrpc::Procedure("watch", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "params",jsonrpc::JSON_STRING, NULL), &AbstractWebThreeStubServer::watchI);

        }
        
        inline virtual void accountsI(const Json::Value& request, Json::Value& response) 
        {
            response = this->accounts();
        }

        inline virtual void balanceAtI(const Json::Value& request, Json::Value& response) 
        {
            response = this->balanceAt(request[0u].asString());
        }

        inline virtual void blockByHashI(const Json::Value& request, Json::Value& response) 
        {
            response = this->blockByHash(request[0u].asString());
        }

        inline virtual void blockByNumberI(const Json::Value& request, Json::Value& response) 
        {
            response = this->blockByNumber(request[0u].asInt());
        }

        inline virtual void callI(const Json::Value& request, Json::Value& response) 
        {
            response = this->call(request[0u]);
        }

        inline virtual void checkI(const Json::Value& request, Json::Value& response) 
        {
            response = this->check(request["id"].asInt());
        }

        inline virtual void codeAtI(const Json::Value& request, Json::Value& response) 
        {
            response = this->codeAt(request[0u].asString());
        }

        inline virtual void coinbaseI(const Json::Value& request, Json::Value& response) 
        {
            response = this->coinbase();
        }

        inline virtual void compileI(const Json::Value& request, Json::Value& response) 
        {
            response = this->compile(request[0u].asString());
        }

        inline virtual void countAtI(const Json::Value& request, Json::Value& response) 
        {
            response = this->countAt(request[0u].asString());
        }

        inline virtual void defaultBlockI(const Json::Value& request, Json::Value& response) 
        {
            response = this->defaultBlock();
        }

        inline virtual void gasPriceI(const Json::Value& request, Json::Value& response) 
        {
            response = this->gasPrice();
        }

        inline virtual void killWatchI(const Json::Value& request, Json::Value& response) 
        {
            response = this->killWatch(request["id"].asInt());
        }

        inline virtual void listeningI(const Json::Value& request, Json::Value& response) 
        {
            response = this->listening();
        }

        inline virtual void messagesI(const Json::Value& request, Json::Value& response) 
        {
            response = this->messages(request["params"]);
        }

        inline virtual void miningI(const Json::Value& request, Json::Value& response) 
        {
            response = this->mining();
        }

        inline virtual void numberI(const Json::Value& request, Json::Value& response) 
        {
            response = this->number();
        }

        inline virtual void peerCountI(const Json::Value& request, Json::Value& response) 
        {
            response = this->peerCount();
        }

        inline virtual void setCoinbaseI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setCoinbase(request[0u].asString());
        }

        inline virtual void setListeningI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setListening(request[0u].asBool());
        }

        inline virtual void setMiningI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setMining(request[0u].asBool());
        }

        inline virtual void stateAtI(const Json::Value& request, Json::Value& response) 
        {
            response = this->stateAt(request[0u].asString(), request[1u].asString());
        }

        inline virtual void transactI(const Json::Value& request, Json::Value& response) 
        {
            response = this->transact(request[0u]);
        }

        inline virtual void transactionByHashI(const Json::Value& request, Json::Value& response) 
        {
            response = this->transactionByHash(request[0u].asString(), request[1u].asInt());
        }

        inline virtual void transactionByNumberI(const Json::Value& request, Json::Value& response) 
        {
            response = this->transactionByNumber(request[0u].asInt(), request[1u].asInt());
        }

        inline virtual void uncleByHashI(const Json::Value& request, Json::Value& response) 
        {
            response = this->uncleByHash(request[0u].asString(), request[1u].asInt());
        }

        inline virtual void uncleByNumberI(const Json::Value& request, Json::Value& response) 
        {
            response = this->uncleByNumber(request[0u].asInt(), request[1u].asInt());
        }

        inline virtual void watchI(const Json::Value& request, Json::Value& response) 
        {
            response = this->watch(request["params"].asString());
        }


        virtual Json::Value accounts() = 0;
        virtual std::string balanceAt(const std::string& param1) = 0;
        virtual Json::Value blockByHash(const std::string& param1) = 0;
        virtual Json::Value blockByNumber(const int& param1) = 0;
        virtual std::string call(const Json::Value& param1) = 0;
        virtual bool check(const int& id) = 0;
        virtual std::string codeAt(const std::string& param1) = 0;
        virtual std::string coinbase() = 0;
        virtual std::string compile(const std::string& param1) = 0;
        virtual double countAt(const std::string& param1) = 0;
        virtual int defaultBlock() = 0;
        virtual std::string gasPrice() = 0;
        virtual bool killWatch(const int& id) = 0;
        virtual bool listening() = 0;
        virtual Json::Value messages(const Json::Value& params) = 0;
        virtual bool mining() = 0;
        virtual int number() = 0;
        virtual int peerCount() = 0;
        virtual bool setCoinbase(const std::string& param1) = 0;
        virtual bool setListening(const bool& param1) = 0;
        virtual bool setMining(const bool& param1) = 0;
        virtual std::string stateAt(const std::string& param1, const std::string& param2) = 0;
        virtual Json::Value transact(const Json::Value& param1) = 0;
        virtual Json::Value transactionByHash(const std::string& param1, const int& param2) = 0;
        virtual Json::Value transactionByNumber(const int& param1, const int& param2) = 0;
        virtual Json::Value uncleByHash(const std::string& param1, const int& param2) = 0;
        virtual Json::Value uncleByNumber(const int& param1, const int& param2) = 0;
        virtual int watch(const std::string& params) = 0;

};
#endif //_ABSTRACTWEBTHREESTUBSERVER_H_
