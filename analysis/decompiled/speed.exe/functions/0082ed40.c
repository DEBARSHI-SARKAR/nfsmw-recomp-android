/* speed.exe 0082ed40 FUN_0082ed40; analysis pseudocode, not buildable source.
 * calls 0082cdc0 FUN_0082cdc0
 * calls 0082d650 FUN_0082d650
 */

void FUN_0082ed40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  if (param_2 == 2) {
    *(int *)(*(int *)(DAT_009c2964 + 0x2c) + 0x10 + param_1 * 0x14) = param_3;
    return;
  }
  if (param_2 == 1) {
    switch(param_1) {
    case 1:
      *(undefined1 *)(param_4 + 1) = (undefined1)param_3;
      return;
    case 2:
    case 3:
    case 4:
    case 0xb:
    case 0xd:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      break;
    case 5:
      *(int *)(param_5 + 4) = param_3;
      return;
    case 6:
      uVar1 = *(uint *)(param_5 + 0x10) ^ (param_3 << 0xc ^ *(uint *)(param_5 + 0x10)) & 0xf000;
      *(uint *)(param_5 + 0x10) = uVar1;
      if (param_3 < -7) {
        *(uint *)(param_5 + 0x10) = uVar1 & 0xffff9fff | 0x9000;
      }
      if (7 < param_3) {
        *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) & 0xffff7fff | 0x7000;
        return;
      }
      break;
    case 7:
      *(uint *)(param_4 + 8) =
           *(uint *)(param_4 + 8) ^ (param_3 << 0x1c ^ *(uint *)(param_4 + 8)) & 0x70000000;
      return;
    case 8:
      if (param_3 < 0x80) {
        if (param_3 < 0) {
          param_3 = 0;
        }
      }
      else {
        param_3 = 0x7f;
      }
      *(short *)(param_4 + 0xe) = (short)param_3;
      if (*(int **)(param_4 + 300) != (int *)0x0) {
        (**(code **)(**(int **)(param_4 + 300) + 0x38))(param_3);
        return;
      }
      break;
    case 9:
      if (param_3 < 0x80) {
        if (param_3 < 0) {
          param_3 = 0;
        }
      }
      else {
        param_3 = 0x7f;
      }
      if (*(int **)(param_4 + 300) != (int *)0x0) {
        (**(code **)(**(int **)(param_4 + 300) + 0x40))(*(uint *)(param_4 + 8) >> 0x1c & 7,param_3);
      }
      *(short *)(param_4 + 0xc) = (short)param_3;
      return;
    case 10:
      FUN_0082cdc0(param_4,param_3);
      return;
    case 0xc:
      *(uint *)(param_4 + 8) =
           *(uint *)(param_4 + 8) ^
           ((uint)(param_3 != 0) << 0x1a ^ *(uint *)(param_4 + 8)) & 0x4000000;
      return;
    case 0xe:
      *(uint *)(param_4 + 8) =
           *(uint *)(param_4 + 8) ^
           ((uint)(param_3 != 0) << 0x19 ^ *(uint *)(param_4 + 8)) & 0x2000000;
      if (*(int **)(param_4 + 300) != (int *)0x0) {
        (**(code **)(**(int **)(param_4 + 300) + 0x10))((uint)(param_3 != 0));
        return;
      }
      break;
    case 0xf:
      if (*(int **)(param_4 + 300) != (int *)0x0) {
        (**(code **)(**(int **)(param_4 + 300) + 0x48))(param_3);
        return;
      }
      break;
    case 0x17:
      if (param_3 < 0x80) {
        if (param_3 < 0) {
          param_3 = 0;
        }
        FUN_0082d650(param_4,param_3);
        return;
      }
      FUN_0082d650(param_4,0x7f);
      return;
    case 0x18:
      if (*(int **)(param_4 + 300) != (int *)0x0) {
        (**(code **)(**(int **)(param_4 + 300) + 0x50))(param_3);
      }
      break;
    default:
      goto switchD_0082ed82_default;
    }
  }
switchD_0082ed82_default:
  return;
}

