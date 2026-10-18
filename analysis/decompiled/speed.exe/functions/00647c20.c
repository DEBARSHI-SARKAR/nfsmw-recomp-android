/* speed.exe 00647c20 FUN_00647c20; analysis pseudocode, not buildable source.
 * calls 00643730 FUN_00643730
 * calls 005cf0d0 FUN_005cf0d0
 * calls 005cef70 FUN_005cef70
 * calls 005cc240 FUN_005cc240
 * calls 00646b20 FUN_00646b20
 */

void FUN_00647c20(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_c;
  int *local_8;
  int *local_4;
  
  uVar8 = 0;
  iVar5 = FUN_005cef70(0x65452020);
  if (iVar5 != 0) {
    do {
      if (uVar8 == 0xffffffff) {
        uVar6 = 0x65452020;
      }
      else {
        uVar6 = uVar8 | 0x65450000;
      }
      iVar5 = FUN_005cf0d0(uVar6);
      puVar7 = *(undefined4 **)(iVar5 + 0xc);
      if ((*(byte *)(iVar5 + 4) & 2) != 0) {
        puVar7 = (undefined4 *)((int)puVar7 + iVar5);
      }
      local_c = FUN_005cc240(*puVar7);
      FUN_00643730(&local_8,&local_c);
      piVar3 = local_8;
      while (piVar3 != local_4) {
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          piVar2 = (int *)piVar3[2];
          if (*(char *)((int)piVar2 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar3 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x15);
              piVar3 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar3[1] + 0x15);
            piVar4 = (int *)piVar3[1];
            piVar2 = piVar3;
            while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
              cVar1 = *(char *)(piVar3[1] + 0x15);
              piVar4 = (int *)piVar3[1];
              piVar2 = piVar3;
            }
          }
        }
      }
      FUN_00646b20(&local_c,local_8,local_4);
      uVar8 = uVar8 + 1;
      uVar6 = FUN_005cef70(0x65452020);
    } while (uVar8 < uVar6);
  }
  return;
}

