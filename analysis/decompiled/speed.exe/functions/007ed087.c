/* speed.exe 007ed087 FUN_007ed087; analysis pseudocode, not buildable source.
 * calls 007f0e0f FUN_007f0e0f
 */

void __thiscall FUN_007ed087(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  char *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == (char *)0x0) {
    param_2 = "";
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_8 = 0;
  local_1c = 1;
  local_c = 1;
  local_14 = &local_10;
  local_20 = &local_1c;
  local_2c = &local_28;
  local_34 = 6;
  local_30 = 0x1b0;
  local_28 = 5;
  local_24 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\filesys.cpp";
  local_10 = 4;
  local_18 = param_2;
  uVar3 = (**(code **)*DAT_009076dc)(pcVar2 + (1 - (int)(param_2 + 1)),&local_34);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  FUN_007f0e0f(uVar3,param_2,pcVar2 + (1 - (int)(param_2 + 1)));
  return;
}

