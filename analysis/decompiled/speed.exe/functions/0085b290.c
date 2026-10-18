/* speed.exe 0085b290 FUN_0085b290; analysis pseudocode, not buildable source.
 * calls 0085afb0 FUN_0085afb0
 * calls 0085af60 FUN_0085af60
 */

void FUN_0085b290(uint *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[1];
  *param_1 = *param_1 + uVar1;
  uVar2 = 0x80;
  if (0x40 - uVar1 < 9) {
    *(undefined1 *)(uVar1 + 0x1c + (int)param_1) = 0x80;
    uVar1 = param_1[1] + 1;
    if (uVar1 < 0x40) {
      uVar1 = 0x40 - uVar1;
      puVar4 = (undefined4 *)(param_1[1] + 0x1d + (int)param_1);
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    FUN_0085afb0(param_1);
    uVar2 = 0;
    param_1[1] = 0;
  }
  *(undefined1 *)((int)param_1 + param_1[1] + 0x1c) = uVar2;
  uVar1 = param_1[1] + 1;
  if (uVar1 < 0x38) {
    uVar1 = 0x38 - uVar1;
    puVar4 = (undefined4 *)(param_1[1] + 0x1d + (int)param_1);
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  uVar1 = *param_1;
  *(byte *)((int)param_1 + 0x57) = (byte)(uVar1 >> 0x1d);
  *(char *)(param_1 + 0x16) = (char)(uVar1 >> 0x15);
  *(char *)((int)param_1 + 0x5a) = (char)(uVar1 >> 5);
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *(char *)((int)param_1 + 0x59) = (char)(uVar1 >> 0xd);
  *(char *)((int)param_1 + 0x5b) = (char)*param_1 << 3;
  FUN_0085afb0(param_1);
  FUN_0085af60(param_1);
  return;
}

