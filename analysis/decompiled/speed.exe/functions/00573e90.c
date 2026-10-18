/* speed.exe 00573e90 FUN_00573e90; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 * calls 00514d10 FUN_00514d10
 */

/* WARNING: Removing unreachable block (ram,0x00573ed1) */

void __thiscall FUN_00573e90(int param_1,int param_2)

{
  ushort uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 2:
    if (0x1c < *(int *)(param_1 + 0x4c)) {
      uVar1 = *(ushort *)(param_1 + 0x54);
      if (((uVar1 & 3) == 0) && (((uint)uVar1 % 100 != 0 || ((uint)uVar1 % 400 == 0)))) {
        *(undefined4 *)(param_1 + 0x4c) = 0x1d;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 0x1c;
      }
    }
    break;
  case 4:
  case 6:
  case 9:
  case 0xb:
    if (0x1e < *(int *)(param_1 + 0x4c)) {
      *(undefined4 *)(param_1 + 0x4c) = 0x1e;
    }
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x38),&DAT_0089d764,*(undefined4 *)(param_1 + 0x4c));
  FUN_00515d70(*(undefined4 *)(param_1 + 0x3c),&DAT_0089d764,*(undefined4 *)(param_1 + 0x50));
  FUN_00515d70(*(undefined4 *)(param_1 + 0x40),&DAT_0089d764,*(undefined2 *)(param_1 + 0x54));
  if ((-1 < param_2) && (param_2 < 7)) {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x58 + param_2 * 4),0x280164f,1);
  }
  return;
}

