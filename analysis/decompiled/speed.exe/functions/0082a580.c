/* speed.exe 0082a580 FUN_0082a580; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082a580(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[0x40];
  uVar3 = uVar1;
  if (((int)uVar1 < 1) && (uVar3 = 0, *(ushort *)(param_1[0x3f] + 0xc) != 0)) {
    uVar3 = (uint)*(ushort *)(param_1[0x3f] + 0xc);
  }
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  (**(code **)(*param_1 + 0x48))(uVar2);
  param_1[0x40] = uVar3;
  return 0;
}

