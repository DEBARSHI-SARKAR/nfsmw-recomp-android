/* speed.exe 0064eea0 FUN_0064eea0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0064eea0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0xd44) = 0;
  *(undefined4 *)(param_2 + 0x1134) = 0;
  *(undefined4 *)(param_2 + 0xd48) = 0;
  *(undefined4 *)(param_2 + 0x1138) = 0;
  *(undefined4 *)(param_2 + 0xd4c) = 0;
  *(undefined4 *)(param_2 + 0x113c) = 0;
  *(undefined4 *)(param_2 + 0xd50) = 0;
  *(undefined4 *)(param_2 + 0x1140) = 0;
  puVar1 = (undefined4 *)(param_2 + 0x1144);
  iVar2 = 8;
  do {
    puVar1[-0xfc] = 1;
    *puVar1 = 4;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_2 + 0x1164);
  iVar2 = 0x10;
  do {
    puVar1[-0xfc] = 2;
    *puVar1 = 0xc;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x20;
  puVar1 = (undefined4 *)(param_2 + 0x11a4);
  do {
    puVar1[-0xfc] = 3;
    *puVar1 = 0x1c;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x40;
  puVar1 = (undefined4 *)(param_2 + 0x1224);
  do {
    puVar1[-0xfc] = 4;
    *puVar1 = 0x3c;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_2 + 0x1324);
  iVar2 = 0x80;
  do {
    puVar1[-0xfc] = 5;
    *puVar1 = 0x7c;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

