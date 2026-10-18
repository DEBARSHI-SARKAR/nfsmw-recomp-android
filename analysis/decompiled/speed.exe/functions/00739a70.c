/* speed.exe 00739a70 FUN_00739a70; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00739a70(undefined4 *param_1,undefined4 param_2,int param_3,undefined1 param_4,
            undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  *(undefined1 *)((int)param_1 + 5) = param_4;
  *(undefined1 *)((int)param_1 + 6) = param_5;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[0xf] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = param_3;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  iVar1 = DAT_00901880 - DAT_009017f8;
  param_1[2] = iVar1;
  param_1[7] = iVar1 + 1;
  param_1[3] = 4;
  param_1[4] = 0;
  param_1[5] = 4;
  param_1[6] = 1;
  param_1[8] = 2;
  param_1[9] = 1;
  param_1[10] = 3;
  param_1[0xb] = 1;
  param_1[0xc] = 4;
  param_1[0xd] = 4;
  param_1[0xe] = 2;
  if (param_3 == 6) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xc3) = 2;
  }
  puVar2 = param_1 + 0x12;
  for (iVar1 = 0x8b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x9d;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x1010101;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0x101;
  *(undefined1 *)((int)puVar2 + 2) = 1;
  param_1[0xc0] = 0;
  return;
}

