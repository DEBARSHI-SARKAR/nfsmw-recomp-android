/* speed.exe 00779310 FUN_00779310; analysis pseudocode, not buildable source.
 * calls 00767a80 FUN_00767a80
 * calls 0076cc10 FUN_0076cc10
 */

uint __thiscall FUN_00779310(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [11];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_40 [64];
  
  *(short *)((int)param_1 + 0x32) = *(short *)((int)param_1 + 0x32) + 1;
  param_1[0xc] = param_1[0xc] & 0xfffffffe;
  piVar3 = (int *)FUN_00767a80(param_3,param_4,local_40);
  if ((char)piVar3 != '\0') {
    param_1[0xc] = param_1[0xc] & 0xfffffffe;
    piVar3 = *(int **)(param_2 + 8);
    piVar5 = *(int **)(param_2 + 4);
    local_7c = 1e+38;
    if (piVar5 != piVar3) {
      local_78 = 0;
      local_74 = 3;
      do {
        local_44 = 0;
        local_43 = 0;
        cVar2 = FUN_0076cc10(local_40,param_4,*piVar5,local_70,&local_80);
        if ((cVar2 != '\0') && (local_80 < local_7c)) {
          iVar1 = *piVar5;
          param_1[0xc] = param_1[0xc] | 1;
          puVar6 = local_70;
          puVar7 = param_1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          param_1[0xe] = *(undefined4 *)
                          ((uint)*(ushort *)(iVar1 + 2) +
                          (uint)*(ushort *)(iVar1 + 6) + iVar1 + 0x10 +
                          (uint)*(byte *)(param_1 + 0xb) * 4);
          local_7c = local_80;
        }
        piVar3 = *(int **)(param_2 + 8);
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar3);
    }
  }
  return (uint)piVar3 & 0xffffff00;
}

