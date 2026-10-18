/* speed.exe 005189f0 FUN_005189f0; analysis pseudocode, not buildable source.
 * calls 007f3bfa FUN_007f3bfa
 * calls 0057fd90 FUN_0057fd90
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00461220 FUN_00461220
 * calls 00460ed0 FUN_00460ed0
 * calls 006cbe20 FUN_006cbe20
 * calls 00599500 FUN_00599500
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_005189f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0057fd90(0);
  if (DAT_0091cb20 != 0) {
    *(int *)(DAT_0091cb20 + 0x3c) = param_2;
    *(undefined4 *)(DAT_0091cb20 + 0xbc) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0xc0) = uVar1;
  }
  FUN_00599500(1);
  uVar1 = FUN_00465a70(*(undefined4 *)(param_1 + 0xc0),0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  if (param_2 != 0) {
    FUN_00461220(&DAT_0091c2b8,param_2,0x10);
    uVar1 = FUN_006cbe20(param_2);
    FUN_00460ed0(param_1 + 0x5c,uVar1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x40) = 5;
  *(undefined2 *)(param_1 + 0x48) = 0;
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    FUN_007f3bfa(param_1 + 0x5c,0,0,&DAT_0091c2b8,0);
  }
  return;
}

