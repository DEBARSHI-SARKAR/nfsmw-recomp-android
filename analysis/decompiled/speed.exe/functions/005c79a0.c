/* speed.exe 005c79a0 FUN_005c79a0; analysis pseudocode, not buildable source.
 */

uint FUN_005c79a0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint unaff_EBX;
  uint *puVar4;
  
  if (unaff_EBX == 0) {
    return 0;
  }
  puVar4 = (uint *)*param_1;
  uVar2 = unaff_EBX;
  while( true ) {
    do {
      uVar1 = uVar2;
      if (uVar1 == 0) {
        uVar2 = (int)puVar4 - *param_1 >> 4;
        if (uVar2 < unaff_EBX) {
          if (*puVar4 < param_2) {
            uVar2 = uVar2 + 1;
          }
          puVar4 = (uint *)(*param_1 + uVar2 * 0x10);
          *param_1 = (int)puVar4;
          if (uVar2 < unaff_EBX) {
            return *puVar4;
          }
        }
        else {
          *param_1 = (int)puVar4;
        }
        return 0;
      }
      uVar2 = uVar1 >> 1;
    } while (param_2 < puVar4[uVar2 * 4]);
    if (param_2 <= puVar4[uVar2 * 4]) break;
    puVar4 = puVar4 + uVar2 * 4 + 4;
    uVar2 = uVar1 + (-1 - uVar2);
  }
  if (uVar2 != 0) {
    puVar3 = puVar4 + uVar2 * 4 + -4;
    do {
      if (*puVar3 != param_2) break;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + -4;
    } while (uVar2 != 0);
  }
  *param_1 = (int)(puVar4 + uVar2 * 4);
  return puVar4[uVar2 * 4];
}

