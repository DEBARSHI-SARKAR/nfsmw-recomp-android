/* speed.exe 006e9f20 FUN_006e9f20; analysis pseudocode, not buildable source.
 * calls 006459e0 FUN_006459e0
 */

void __thiscall FUN_006e9f20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x6c) == 0) && (param_2 != 0)) {
    uVar1 = FUN_006459e0(param_1 + 0x10,param_1 + 0x40,param_2,DAT_009885d8,0x3f800000);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  return;
}

