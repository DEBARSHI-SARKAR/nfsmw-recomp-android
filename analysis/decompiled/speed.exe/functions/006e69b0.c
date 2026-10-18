/* speed.exe 006e69b0 FUN_006e69b0; analysis pseudocode, not buildable source.
 * calls 006e63f0 FUN_006e63f0
 */

void __thiscall FUN_006e69b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_006e63f0(uVar1,0x51e6395b);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}

