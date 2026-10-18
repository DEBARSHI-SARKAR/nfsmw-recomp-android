/* speed.exe 0085ff80 write_char; analysis pseudocode, not buildable source.
 * calls 00860b70 __putwc_lk
 */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2003 Debug */

void __cdecl write_char(undefined2 param_1,int param_2,int *param_3)

{
  short sVar1;
  
  if (((*(uint *)(param_2 + 0xc) & 0x40) == 0) || (*(int *)(param_2 + 8) != 0)) {
    sVar1 = __putwc_lk(param_1,param_2);
    if (sVar1 == -1) {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}

