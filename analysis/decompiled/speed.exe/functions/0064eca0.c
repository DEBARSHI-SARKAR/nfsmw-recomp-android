/* speed.exe 0064eca0 FUN_0064eca0; analysis pseudocode, not buildable source.
 * calls 0064e940 FUN_0064e940
 */

void FUN_0064eca0(int param_1,undefined4 param_2)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  
  if (in_EAX < 0xfc) {
    iVar1 = *(int *)(param_1 + 0xd44 + in_EAX * 4);
    iVar2 = *(int *)(param_1 + 0x1134 + in_EAX * 4);
  }
  else if (in_EAX < 0x1fc) {
    iVar1 = 6;
    iVar2 = 0xfc;
  }
  else if (in_EAX < 0x3fc) {
    iVar1 = 7;
    iVar2 = 0x1fc;
  }
  else if (in_EAX < 0x7fc) {
    iVar1 = 8;
    iVar2 = 0x3fc;
  }
  else if (in_EAX < 0xffc) {
    iVar1 = 9;
    iVar2 = 0x7fc;
  }
  else if (in_EAX < 0x1ffc) {
    iVar1 = 10;
    iVar2 = 0xffc;
  }
  else if (in_EAX < 0x3ffc) {
    iVar1 = 0xb;
    iVar2 = 0x1ffc;
  }
  else if (in_EAX < 0x7ffc) {
    iVar1 = 0xc;
    iVar2 = 0x3ffc;
  }
  else if (in_EAX < 0xfffc) {
    iVar1 = 0xd;
    iVar2 = 0x7ffc;
  }
  else if (in_EAX < 0x1fffc) {
    iVar1 = 0xe;
    iVar2 = 0xfffc;
  }
  else if (in_EAX < 0x3fffc) {
    iVar1 = 0xf;
    iVar2 = 0x1fffc;
  }
  else if (in_EAX < 0x80000) {
    iVar1 = 0x10;
    iVar2 = 0x3fffc;
  }
  else if (in_EAX < 0x100000) {
    iVar1 = 0x11;
    iVar2 = 0x80000;
  }
  else {
    iVar1 = 0x12;
    iVar2 = 0x100000;
  }
  FUN_0064e940(param_1,param_2,1,iVar1 + 1);
  FUN_0064e940(param_1,param_2,in_EAX - iVar2,iVar1 + 2);
  return;
}

