#include <QDate>
#include <QString>

class User{
    private:
        int id ;
        QString username ;
        QString password ;
        int cityCount ;
        QDateTime createTime ;
        QDateTime updateTime ;
    public :
        void setId(int id){
            this->id = id ;
        }
        int getId(){
            return id ;
        }
        void setCityCount(int cityCount){
            this->cityCount = cityCount ;
        }
        int getCityCount(){
            return cityCount ;
        }
        void setUsername(QString username){
            this->username = username ;
        }
        QString getUsername(){
            return username ;
        }
        void setPassword(QString password){
            this->password = password ;
        }
        QString getPassword(){
            return password ;
        }
        void setCreateTime(QDateTime createTime){
            this->createTime = createTime ;
        }
        QDateTime getCreateTime(){
            return createTime ;
        }
        void setUpdateTime(QDateTime updateTime){
            this->updateTime = updateTime ;
        }
        QDateTime getUpdateTime(){
            return updateTime ;
        }


};
