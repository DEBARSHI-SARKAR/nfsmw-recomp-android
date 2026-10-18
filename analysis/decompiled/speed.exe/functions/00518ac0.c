/* speed.exe 00518ac0 FUN_00518ac0; analysis pseudocode, not buildable source.
 * calls 007f3c2b FUN_007f3c2b
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00461220 FUN_00461220
 * calls 00460ed0 FUN_00460ed0
 * calls 006cbe20 FUN_006cbe20
 */

void __thiscall FUN_00518ac0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x40) = 6;
  *(undefined2 *)(param_1 + 0x48) = 0;
  if (param_2 != 0) {
    FUN_00461220(&DAT_0091c2b8,param_2,0x10);
    uVar1 = FUN_006cbe20(param_2);
    FUN_00460ed0(param_1 + 0x5c,uVar1);
  }
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    FUN_007f3c2b(param_1 + 0x5c,&DAT_0091c2b8);
  }
  return;
}

