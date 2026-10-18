/* speed.exe 006e6940 FUN_006e6940; analysis pseudocode, not buildable source.
 * calls 006e63f0 FUN_006e63f0
 */

int __thiscall FUN_006e6940(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006e63f0(*(undefined4 *)(param_1 + 4),0x51e6395b);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return param_2;
}

