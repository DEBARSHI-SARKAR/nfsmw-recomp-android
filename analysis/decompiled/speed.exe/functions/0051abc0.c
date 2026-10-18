/* speed.exe 0051abc0 FUN_0051abc0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 */

void __thiscall FUN_0051abc0(uint *param_1,int param_2)

{
  uint uVar1;
  
  if ((*param_1 & 0x100) != 0) {
    FUN_00516be0(param_2,param_1[2],0xfffffffc,0xff);
  }
  if ((*param_1 & 0x400) != 0) {
    if (param_2 == 0x461a18ee) {
      uVar1 = param_1[9];
    }
    else {
      uVar1 = param_1[10];
    }
    FUN_00516be0(uVar1,param_1[2],0xffffffff,0xff);
  }
  return;
}

