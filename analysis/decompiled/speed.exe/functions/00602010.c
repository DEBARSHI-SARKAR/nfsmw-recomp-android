/* speed.exe 00602010 FUN_00602010; analysis pseudocode, not buildable source.
 * calls 0056dc00 FUN_0056dc00
 * calls 00627400 FUN_00627400
 * calls 00460d20 FUN_00460d20
 * calls 005fba70 FUN_005fba70
 * calls 005fbd20 FUN_005fbd20
 * calls 005e1780 FUN_005e1780
 * calls 00624700 FUN_00624700
 * calls 005ffd80 FUN_005ffd80
 * calls 00620920 FUN_00620920
 */

void __fastcall FUN_00602010(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008761be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x1960) = 1;
  FUN_005ffd80();
  if ((DAT_0092d854 != 0) && (piVar6 = (int *)*DAT_0092d84c, piVar6 != (int *)0x0)) {
    while( true ) {
      cVar2 = (**(code **)(*piVar6 + 0x40))();
      if (cVar2 != '\0') {
        (**(code **)(*piVar6 + 0x50))();
      }
      if (piVar6 == (int *)0xfffffff8) {
        piVar6 = (int *)0x0;
      }
      piVar1 = DAT_0092d84c + DAT_0092d854;
      piVar3 = DAT_0092d84c;
      if (DAT_0092d84c == piVar1) break;
      do {
        if ((int *)*piVar3 == piVar6) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
      if (((piVar3 == piVar1) || (piVar3 + 1 == piVar1)) ||
         (piVar6 = (int *)piVar3[1], piVar6 == (int *)0x0)) break;
    }
  }
  *(undefined4 *)(param_1 + 0x19a0) = 0;
  iVar5 = DAT_0091dff8;
  if (DAT_0091dff8 != 0) {
    if ((*(ushort *)(DAT_0091dff8 + 0x18) & 0x800) == 0) {
      FUN_005e1780();
    }
    iVar7 = iVar5;
    if (iVar5 != 0) {
      do {
        if (*(int *)(iVar5 + 0x74) != 0) {
          *(int *)(param_1 + 0x19a0) = *(int *)(param_1 + 0x19a0) + 1;
          iVar7 = DAT_0091dff8;
        }
        iVar5 = *(int *)(iVar5 + 0x24);
        while( true ) {
          if (iVar5 == iVar7) goto LAB_00602107;
          if ((*(ushort *)(iVar5 + 0x18) & 0x800) != 0) break;
          iVar5 = *(int *)(iVar5 + 0x24);
        }
      } while( true );
    }
  }
LAB_00602107:
  if ((*(int *)(param_1 + 0x1968) == 0) || (cVar2 = FUN_005fbd20(), cVar2 == '\0')) {
LAB_00602137:
    cVar2 = FUN_0056dc00();
    if (cVar2 == '\0') goto LAB_0060216b;
  }
  else {
    uVar4 = FUN_005fba70("16.1.0");
    iVar5 = FUN_00460d20(uVar4);
    if (iVar5 == 0) goto LAB_00602137;
  }
  iVar5 = FUN_00627400(8);
  uStack_4 = 0;
  if (iVar5 != 0) {
    FUN_00620920();
  }
  uStack_4 = 0xffffffff;
LAB_0060216b:
  iVar5 = FUN_00627400(8);
  uStack_4 = 1;
  if (iVar5 != 0) {
    FUN_00624700();
  }
  *(undefined1 *)(param_1 + 0x4490) = 0;
  ExceptionList = pvStack_c;
  return;
}

