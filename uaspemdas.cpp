#include <iostream>
using namespace std;

class MasukUniversitas {
   int UangPendaftaran;

    public:
        MasukUniversitas(int pUangPendaftaran) {
            UangPendaftaran = 0;

        }
        virtual void namaJalurMasuk() { return; }

        void setUangPendaftaran(int nilai){
            this->UangPendaftaran = nilai;
        }
        float
            getUangPendaftaran(){
                return UangPendaftaran;
            }

};
class SNBT : public MasukUniversitas{
    public:
        SNBT(int pUangPendaftaran) :
            MasukUniversitas(pUangPendaftaran){
                cout << "Jalur SNBT\n" << endl;
            }
};
class SNBP : public MasukUniversitas{
    public:
        SNBP(int pUangPendaftaran) :
            MasukUniversitas(pUangPendaftaran){
                cout << "Jalur SNBP\n" << endl;
            }
};
int main(){

}