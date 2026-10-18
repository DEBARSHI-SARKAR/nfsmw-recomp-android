/* speed.exe 007708b0 FUN_007708b0; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 00452380 FUN_00452380
 */

int __fastcall FUN_007708b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = FUN_00455fd0(0x6d90da55,0xeec2271a,0,0);
  FUN_00452380(uVar1,uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}

