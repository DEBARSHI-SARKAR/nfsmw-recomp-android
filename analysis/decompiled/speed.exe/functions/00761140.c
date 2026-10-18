/* speed.exe 00761140 FUN_00761140; analysis pseudocode, not buildable source.
 * calls 00790a60 FUN_00790a60
 * calls 00760cd0 FUN_00760cd0
 * calls 007a12e0 FUN_007a12e0
 * calls 0079f090 FUN_0079f090
 * calls 007c4b80 FUN_007c4b80
 * calls 00627860 FUN_00627860
 * calls 0078eba0 FUN_0078eba0
 * calls 0078b2c0 FUN_0078b2c0
 */

void __thiscall FUN_00761140(int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_0078eba0();
  if (cVar2 != '\0') {
    FUN_007a12e0();
  }
  FUN_0079f090();
  FUN_00790a60();
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  iVar1 = param_1[2];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1144) != 0)) {
    *(undefined4 *)(iVar1 + 0x1144) = 0;
  }
  iVar1 = param_1[3];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1144) != 0)) {
    *(undefined4 *)(iVar1 + 0x1144) = 0;
  }
  iVar1 = param_1[4];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1144) != 0)) {
    *(undefined4 *)(iVar1 + 0x1144) = 0;
  }
  iVar1 = param_1[5];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1144) != 0)) {
    *(undefined4 *)(iVar1 + 0x1144) = 0;
  }
  iVar1 = *param_1;
  if (((iVar1 == 2) && (DAT_009b4174 != 0)) && (param_2 == '\0')) {
    *param_1 = 1;
    FUN_00760cd0();
    return;
  }
  if ((iVar1 != 0) && (*param_1 = 0, iVar1 == 5)) {
    FUN_0078b2c0();
    uVar3 = FUN_007c4b80();
    FUN_00627860(uVar3);
  }
  FUN_00760cd0();
  return;
}

