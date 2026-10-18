/* speed.exe 0082e470 FUN_0082e470; analysis pseudocode, not buildable source.
 * calls 007c94b0 __chkstk
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_0082e470(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_1110 [1089];
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = &DAT_009c2954;
  do {
    if ((*local_c != 0) && (local_8 + 1 < 4)) {
      piVar2 = local_c + 1;
      do {
        puVar4 = (undefined4 *)*piVar2;
        if ((puVar4 != (undefined4 *)0x0) &&
           (puVar6 = (undefined4 *)*local_c, (uint)puVar4[5] < (uint)puVar6[5])) {
          puVar3 = puVar6;
          puVar5 = local_1110;
          for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = local_1110;
          puVar6 = (undefined4 *)*piVar2;
          for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        piVar2 = piVar2 + 1;
      } while ((int)piVar2 < 0x9c2964);
    }
    local_c = local_c + 1;
    local_8 = local_8 + 1;
  } while ((int)local_c < 0x9c2964);
  return;
}

