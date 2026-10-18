/* speed.exe 00833169 FUN_00833169; analysis pseudocode, not buildable source.
 * calls 008327ff FUN_008327ff
 * calls 008328cc FUN_008328cc
 * calls 00832853 FUN_00832853
 */

undefined4 FUN_00833169(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 *in_EAX;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  int local_8;
  
  cVar2 = *(char *)((int)in_EAX + 3);
  uVar5 = *in_EAX;
  bVar3 = *(byte *)(in_EAX + 1);
  local_8 = -1;
  *(undefined2 *)((int)unaff_ESI + 6) = 0xffff;
  *unaff_ESI = -1;
  *(undefined2 *)(unaff_ESI + 1) = 0xffff;
  if (cVar2 == '\0') {
    uVar5 = FUN_008327ff(uVar5,&local_8);
    *(undefined2 *)(unaff_ESI + 1) = uVar5;
    local_8 = (int)(short)local_8;
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\x02') {
        return 0;
      }
      sVar4 = FUN_008327ff(uVar5,&local_8);
      puVar1 = (undefined4 *)(param_1 + (uint)bVar3 * 4);
      iVar6 = FUN_008328cc((int)sVar4,*puVar1);
      iVar7 = -1;
      if (iVar6 != 0) {
        *(undefined2 *)((int)unaff_ESI + 6) = *(undefined2 *)puVar1;
        iVar7 = local_8;
      }
      *(short *)(unaff_ESI + 1) = sVar4;
      *unaff_ESI = iVar7;
      goto LAB_00833205;
    }
    uVar5 = FUN_00832853(uVar5,*(undefined2 *)(param_1 + (uint)bVar3 * 4),&local_8);
    *(undefined2 *)(unaff_ESI + 1) = uVar5;
  }
  *unaff_ESI = local_8;
LAB_00833205:
  if (*unaff_ESI < 0) {
    return 0;
  }
  return 1;
}

