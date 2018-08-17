#ifndef CFG__H
#define CFG__H

namespace translations
{
    enum LANG { DE, EN };
    extern std::map<std::string, std::string> en;
}

namespace cfg_util
{
    enum captchaType { IMAGE, TEXT };
    class dstream
    {
        private:
            std::string* gameName;
            std::string* streamURL;
        public:
            std::string* getGameName() const;
            void setGameName(std::string&);
            std::string* getStreamURL() const;
            void setStreamURL(std::string&);
    };

    class dcommand
    {
        private:
            std::string* commandName;
            std::string* execName;
            std::vector<std::string>* contributors;
            bool* enabled;
        public:
            std::string* getCommandName() const;
            void setCommandName(std::string&);
            std::string* getExecutionName() const;
            void setExecutionName(std::string&);
            std::vector<std::string>* getContributors() const;
            void setContributors(std::vector<std::string>&);
            std::string addContributor(std::string);
            bool isEnabled() const;
            void setStatus(bool&);
    };
}

namespace cfg_input
{
    std::string token,
    clientid,
    prefix,
    logChannel,
    verifiedRole,
    owner;

    cfg_util::dstream stream;

    bool eval,
    logToDB;

    cfg_util::captchaType ctype;
}

#endif
