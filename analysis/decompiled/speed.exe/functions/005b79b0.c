/* speed.exe 005b79b0 FUN_005b79b0; analysis pseudocode, not buildable source.
 * calls 007c5e60 _printf
 * calls 00652ac0 _malloc
 */

void __thiscall FUN_005b79b0(int param_1,int param_2,char param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  _printf("If you get this, come see Gary or Lolley!\n");
  puVar3 = _malloc(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0xabadcafe;
    puVar3[2] = 0xabadcafe;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_FUN_008a2c7c;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  puVar3[7] = param_2;
  puVar3[6] = *(uint *)(param_2 + 0x20) & param_4;
  puVar3[5] = (uint)(param_3 != '\0') * 4 + 4;
  iVar1 = *(int *)(param_1 + 0x412c);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x4128);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = 0;
    *(undefined4 **)(param_1 + 0x4128) = puVar3;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = iVar1;
    *(undefined4 **)(iVar1 + 4) = puVar3;
  }
  if (*(int *)(param_1 + 0x412c) == iVar1) {
    *(undefined4 **)(param_1 + 0x412c) = puVar3;
  }
  *(int *)(param_1 + 0x4124) = *(int *)(param_1 + 0x4124) + 1;
  return;
}

