#include <iostream>

class Forno{
    private:
        int temperature = 0;

    public:
        Forno(int temperature){
            setTemperature(temperature);
        }

        int getTemperature(){
            return temperature;
        }

        void setTemperature(int temperature){
            //this->temperature = temperature;

            // Possível fazer verificações antes de setar
            if(temperature < 0){
                this->temperature = 0;
            } else if (temperature >= 10){
                this->temperature = 10;
            } else{
                this->temperature = temperature;
            }
        }


};


int main(){
    Forno forno(0);

    forno.setTemperature(100000);

    std::cout << "Temperatura = " << forno.getTemperature() << "\n";

    return 0;
}