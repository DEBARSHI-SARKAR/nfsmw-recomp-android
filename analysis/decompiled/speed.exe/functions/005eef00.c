/* speed.exe 005eef00 FUN_005eef00; analysis pseudocode, not buildable source.
 * calls 005edd60 FUN_005edd60
 */

void __thiscall FUN_005eef00(int param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      puVar1 = *(ushort **)(*(int *)(param_1 + 0x2c4) + uVar2 * 4);
      if ((((byte)puVar1[1] >> 4 & 1) == 0) || (*puVar1 != param_2)) {
        uVar2 = uVar2 + 1;
      }
      else {
        FUN_005edd60(uVar2);
      }
    } while (uVar2 < *(uint *)(param_1 + 700));
  }
  return;
}

