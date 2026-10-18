/* speed.exe 007b6ec0 FUN_007b6ec0; analysis pseudocode, not buildable source.
 * calls 007b5a50 FUN_007b5a50
 */

void FUN_007b6ec0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar5 = DAT_009ba078;
  iVar4 = DAT_009ba074;
  if (DAT_009ba074 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(DAT_009ba074 + -4);
  }
  while( true ) {
    while( true ) {
      puVar7 = puVar3;
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar5 + -4;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(*(int *)(iVar2 + 4) + -4);
      }
      if (puVar7 == puVar3) {
        FUN_007b5a50();
        return;
      }
      if (*(char *)(puVar7 + 5) == '\0') break;
      if (puVar7[1] == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(puVar7[1] + -4);
      }
    }
    if (*(int *)(puVar7[3] + 0x10) == 0x4d) break;
LAB_007b6f92:
    if (puVar7[1] == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(puVar7[1] + -4);
    }
    if (puVar7 != (undefined4 *)0x0) {
      iVar4 = puVar7[1];
      piVar1 = (int *)puVar7[2];
      *piVar1 = iVar4;
      *(int **)(iVar4 + 4) = piVar1;
      (**(code **)*puVar7)(1);
      DAT_009ba07c = DAT_009ba07c + -1;
      iVar5 = DAT_009ba078;
      iVar4 = DAT_009ba074;
    }
  }
  do {
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(iVar4 + -4);
    }
    while( true ) {
      puVar6 = puVar3;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar5 + -4;
      }
      if (*(int *)(iVar4 + 4) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(*(int *)(iVar4 + 4) + -4);
      }
      iVar4 = DAT_009ba074;
      if (puVar6 == puVar3) goto LAB_007b6f92;
      if ((*(int *)(puVar6[3] + 0x10) < 0x4f) || (0x52 < *(int *)(puVar6[3] + 0x10))) break;
      if (puVar6[1] == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(puVar6[1] + -4);
      }
      if (puVar6 != (undefined4 *)0x0) {
        iVar4 = puVar6[1];
        piVar1 = (int *)puVar6[2];
        *piVar1 = iVar4;
        *(int **)(iVar4 + 4) = piVar1;
        (**(code **)*puVar6)(1);
        DAT_009ba07c = DAT_009ba07c + -1;
        iVar5 = DAT_009ba078;
      }
    }
    iVar4 = puVar6[1];
  } while( true );
}

