#include "individual.cpp"
#include "Scene.cpp"
#include <stdio.h>
#include <string.h>

int purchaseTicket(User* user, Show* show, int seatNumbers[], int seatCount) {
    if (user->accountBalance < show->price * seatCount) {
        return -1;  // ����
    }

    // ��λ�Ͷ�������߼�
    // �����˻����ͳ�����Ʊ��

    return 0;  // ����ɹ�
}

int loginUser(User users[], int userCount, char userID[], char password[]) {
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].userID, userID) == 0 && strcmp(users[i].password, password) == 0) {
            return i;  // �����û�������
        }
    }
    return -1;  // ��¼ʧ��
}

int loginAdmin(Admin admins[], int adminCount, char adminID[], char password[]) {
    for (int i = 0; i < adminCount; i++) {
        if (strcmp(admins[i].adminID, adminID) == 0 && strcmp(admins[i].password, password) == 0) {
            return i;  // ���ع���Ա������
        }
    }
    return -1;  // ��¼ʧ��
}

