/* speed.exe 0072c8e0 FUN_0072c8e0; analysis pseudocode, not buildable source.
 * calls 00724a80 FUN_00724a80
 * calls 00724af0 FUN_00724af0
 * calls 00729850 FUN_00729850
 */

void __thiscall FUN_0072c8e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  char *pcVar6;
  int iVar7;
  int local_8;
  
  local_8 = 0;
  if (*(int *)(param_2 + 0x30) < 1) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x10);
  pcVar6 = (char *)(param_2 + 0x34);
LAB_0072c912:
  piVar4 = (int *)*piVar1;
  if (piVar4 != piVar1) {
    do {
      if ((short)piVar4[3] == *(short *)(pcVar6 + 2)) {
        iVar7 = (int)(short)piVar4[4];
        if (*pcVar6 != '\0') {
          iVar3 = 0;
          if (iVar7 < 1) goto LAB_0072c954;
          psVar5 = (short *)((int)piVar4 + 0x12);
          goto LAB_0072c947;
        }
        iVar3 = 0;
        if (0 < iVar7) {
          psVar5 = (short *)((int)piVar4 + 0x12);
          goto LAB_0072c970;
        }
        break;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != piVar1);
  }
  goto LAB_0072c9b7;
  while( true ) {
    iVar3 = iVar3 + 1;
    psVar5 = psVar5 + 1;
    if (iVar7 <= iVar3) break;
LAB_0072c947:
    if (*psVar5 == *(short *)(pcVar6 + 4)) goto LAB_0072c9b7;
  }
LAB_0072c954:
  FUN_00729850((int)*(short *)(pcVar6 + 4));
LAB_0072c988:
  FUN_00724af0();
  if (param_3 != 0) {
    iVar7 = *(int *)(param_3 + 0x30);
    *(int *)(param_3 + 0x30) = iVar7 + 1;
    puVar2 = (undefined4 *)(param_3 + 0x34 + iVar7 * 6);
    *puVar2 = *(undefined4 *)pcVar6;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(pcVar6 + 4);
    *(bool *)puVar2 = *pcVar6 == '\0';
  }
  goto LAB_0072c9b7;
  while( true ) {
    iVar3 = iVar3 + 1;
    psVar5 = psVar5 + 1;
    if (iVar7 <= iVar3) break;
LAB_0072c970:
    if (*psVar5 == *(short *)(pcVar6 + 4)) {
      FUN_00724a80((int)*(short *)(pcVar6 + 4));
      goto LAB_0072c988;
    }
  }
LAB_0072c9b7:
  local_8 = local_8 + 1;
  pcVar6 = pcVar6 + 6;
  if (*(int *)(param_2 + 0x30) <= local_8) {
    return;
  }
  goto LAB_0072c912;
}

