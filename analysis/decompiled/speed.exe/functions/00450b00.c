/* speed.exe 00450b00 FUN_00450b00; analysis pseudocode, not buildable source.
 * calls 00450700 FUN_00450700
 * calls 0044e9b0 FUN_0044e9b0
 */

char __thiscall FUN_00450b00(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  char local_5;
  
  local_5 = '\0';
  if (param_1[1] == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_1[1] + -4);
  }
  while( true ) {
    piVar4 = param_1;
    if (param_1 == (int *)0xfffffffc) {
      piVar4 = (int *)0x0;
    }
    if (piVar3 == piVar4) break;
    if (piVar3[1] == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(piVar3[1] + -4);
    }
    iVar1 = piVar3[7];
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        piVar3[7] = 0;
        if ((char)piVar3[0xe] != '\0') {
          cVar2 = (**(code **)(*piVar3 + 8))();
          if (cVar2 != '\0') {
            *(undefined1 *)(piVar3 + 0x10) = 0;
          }
          FUN_0044e9b0();
          *(undefined1 *)(piVar3 + 0xe) = 0;
        }
        (**(code **)(*piVar3 + 0x10))(piVar3[10]);
      }
      else if (iVar1 == 2) {
        piVar3[7] = 0;
        if ((char)piVar3[0xe] != '\0') {
          cVar2 = (**(code **)(*piVar3 + 8))();
          if (cVar2 != '\0') {
            *(undefined1 *)(piVar3 + 0x10) = 0;
          }
          FUN_0044e9b0();
          *(undefined1 *)(piVar3 + 0xe) = 0;
        }
        (**(code **)(*piVar3 + 0x10))(piVar3[10]);
      }
    }
    if (param_3 != '\0') {
      FUN_00450700(piVar3[3]);
    }
    piVar3 = piVar4;
    if (local_5 == '\0') {
      local_5 = '\x01';
    }
  }
  return local_5;
}

