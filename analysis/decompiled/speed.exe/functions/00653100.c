/* speed.exe 00653100 FUN_00653100; analysis pseudocode, not buildable source.
 */

undefined1 * FUN_00653100(int param_1,uint param_2,int param_3,undefined1 *param_4,char param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte local_7;
  byte local_6;
  byte local_5;
  
  if (param_1 == 0) {
    return (undefined1 *)0x0;
  }
  uVar2 = 0;
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    if (param_2 == 0) {
      local_6 = 0;
      goto LAB_00653146;
    }
    do {
      local_6 = *(byte *)(param_1 + uVar2);
LAB_00653146:
      if (uVar2 + 1 < param_2) {
        local_5 = *(byte *)(uVar2 + 1 + param_1);
      }
      else {
        local_5 = 0;
      }
      if (uVar2 + 2 < param_2) {
        local_7 = *(byte *)(uVar2 + 2 + param_1);
      }
      else {
        local_7 = 0;
      }
      uVar2 = uVar2 + 3;
      if ((param_3 != 0) && (puVar3 + param_3 + (3 - param_3) <= param_4)) {
        puVar3[param_3] = (&DAT_008a8020)[local_6 >> 2];
        puVar3[param_3 + 1] = (&DAT_008a8020)[(uint)(local_5 >> 4) | (local_6 & 3) << 4];
        if (uVar2 == param_2 + 2) {
          uVar1 = 0x3d;
        }
        else {
          uVar1 = (&DAT_008a8020)[(uint)(local_7 >> 6) | (local_5 & 0xf) << 2];
        }
        puVar3[param_3 + 2] = uVar1;
        if (uVar2 < param_2 + 1) {
          uVar1 = (&DAT_008a8020)[local_7 & 0x3f];
        }
        else {
          uVar1 = 0x3d;
        }
        puVar3[param_3 + 3] = uVar1;
      }
      puVar3 = puVar3 + 4;
    } while (uVar2 < param_2);
  }
  if (param_5 == '\x01') {
    if ((param_3 != 0) && (puVar3 < param_4)) {
      puVar3[param_3] = 0;
    }
    puVar3 = puVar3 + 1;
  }
  return puVar3;
}

