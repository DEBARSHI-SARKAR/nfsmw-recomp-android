/* speed.exe 007e9b40 FUN_007e9b40; analysis pseudocode, not buildable source.
 * calls 007eb150 FUN_007eb150
 * calls 007e9a90 FUN_007e9a90
 */

int __thiscall
FUN_007e9b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  FUN_007e9a90();
  *(undefined4 *)(param_1 + 4) = 2;
  iVar1 = FUN_007eb150(param_4);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  if ((iVar1 != 0x79) && (iVar1 != 0x7b)) {
    switch(iVar1) {
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      break;
    default:
      return param_1;
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  *(undefined4 *)(param_1 + 0x54) = 0x2a;
  *(int *)(param_1 + 0x5c) = 1 << ((byte)param_4 & 0x1f);
  return param_1;
}

