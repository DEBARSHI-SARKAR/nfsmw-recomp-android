/* speed.exe 00433d70 FUN_00433d70; analysis pseudocode, not buildable source.
 * calls 004303b0 FUN_004303b0
 */

int __thiscall FUN_00433d70(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004303b0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return param_1;
}

