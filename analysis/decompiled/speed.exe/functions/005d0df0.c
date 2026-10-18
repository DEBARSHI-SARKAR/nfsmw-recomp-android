/* speed.exe 005d0df0 FUN_005d0df0; analysis pseudocode, not buildable source.
 * calls 005ce970 FUN_005ce970
 * calls 005c7880 FUN_005c7880
 * calls 005c76b0 FUN_005c76b0
 * calls 005cf0d0 FUN_005cf0d0
 */

int * __thiscall FUN_005d0df0(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 local_c [12];
  
  pcVar1 = DAT_0091dd8c;
  if ((DAT_0091dd8c != (code *)0x0) && (DAT_0091dd94 == 0)) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      uVar8 = 0;
      pcVar7 = "Null Reference";
LAB_005d0e9b:
      cVar2 = (*pcVar1)(pcVar7,uVar8);
    }
    else {
      if (iVar5 == -1) {
        uVar8 = 1;
        pcVar7 = "Container Reference";
        goto LAB_005d0e9b;
      }
      puVar3 = (undefined4 *)FUN_005cf0d0(iVar5);
      puVar4 = (undefined4 *)FUN_005ce970();
      if (puVar3 == puVar4) {
        uVar8 = 1;
        pcVar7 = "Invalid TagReference";
        goto LAB_005d0e9b;
      }
      iVar5 = FUN_005c76b0();
      if (iVar5 == 0x73722020) {
        pcVar7 = (char *)puVar3[3];
        if ((*(byte *)(puVar3 + 1) & 2) != 0) {
          pcVar7 = pcVar7 + (int)puVar3;
        }
        uVar8 = 1;
        goto LAB_005d0e9b;
      }
      FUN_005c7880(*puVar3,*(byte *)(puVar3 + 1) & 1,local_c);
      cVar2 = (*DAT_0091dd8c)(local_c,1);
    }
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return param_1;
  }
  iVar6 = DAT_0091dd94;
  if (DAT_0091dd94 == 0) {
    if (iVar5 == -1) {
      *param_1 = param_2;
      return param_1;
    }
    iVar5 = FUN_005cf0d0(iVar5);
    iVar6 = *(int *)(param_2 + 0xc);
    if ((*(uint *)(param_2 + 4) & 2) != 0) {
      iVar6 = iVar6 * 0x10 + param_2;
    }
    if (iVar5 == ((*(uint *)(param_2 + 4) >> 5) + *(int *)(param_2 + 8)) * 0x10 + iVar6) {
      *param_1 = 0;
      return param_1;
    }
    iVar6 = *(int *)(iVar5 + 0xc);
    if ((*(byte *)(iVar5 + 4) & 2) == 0) goto LAB_005d0efb;
  }
  iVar6 = iVar6 + iVar5;
LAB_005d0efb:
  *param_1 = iVar6;
  return param_1;
}

