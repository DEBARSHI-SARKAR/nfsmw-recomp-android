/* speed.exe 005edfe0 FUN_005edfe0; analysis pseudocode, not buildable source.
 * calls 005ec040 FUN_005ec040
 * calls 005ec160 FUN_005ec160
 * calls 00631420 FUN_00631420
 * calls 005d59f0 FUN_005d59f0
 * calls 00627400 FUN_00627400
 */

void __fastcall FUN_005edfe0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087557f;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x2ac) != 0) {
    ExceptionList = &local_c;
    cVar1 = FUN_005ec040();
    if (cVar1 != '\0') {
      iVar2 = FUN_005ec160();
      if (iVar2 != -1) {
        iVar3 = FUN_00627400(0xc);
        local_4 = 0;
        if (iVar3 != 0) {
          FUN_00631420(iVar2);
        }
        local_4 = 0xffffffff;
      }
      if ((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) {
        iVar2 = (**(code **)(*(int *)*DAT_0092d87c + 0x20))();
        if (iVar2 != 0) {
          piVar4 = (int *)FUN_005d59f0(&LAB_005659c0);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x1c))();
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

