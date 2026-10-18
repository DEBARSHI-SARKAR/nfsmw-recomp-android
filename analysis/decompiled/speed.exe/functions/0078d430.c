/* speed.exe 0078d430 FUN_0078d430; analysis pseudocode, not buildable source.
 * calls 00843f10 FUN_00843f10
 * calls 00843dd0 FUN_00843dd0
 * calls 00842cf0 FUN_00842cf0
 */

void __fastcall FUN_0078d430(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_600 [1092];
  char cStack_1bc;
  char cStack_18f;
  char cStack_162;
  char cStack_135;
  undefined1 auStack_108 [264];
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 < 10) {
    FUN_00843dd0(param_1[1],auStack_600);
    if (((((iVar2 == 1) || (cStack_1bc = cStack_18f, iVar2 == 2)) ||
         (cStack_1bc = cStack_162, iVar2 == 3)) || (cStack_1bc = cStack_135, iVar2 == 4)) &&
       ((cStack_1bc == '^' &&
        (cVar1 = (**(code **)(*param_1 + 0x40))(auStack_108,200), cVar1 != '\0')))) {
      FUN_00843f10(param_1[1],auStack_600);
    }
    FUN_00842cf0(param_1[1],iVar2);
    *(undefined1 *)(param_1 + 0x3c) = 0;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

