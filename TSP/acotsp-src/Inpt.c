void recollect_ancestor_data (void)
{
    FILE         *opt_file;
    char         temp_buffer[LINE_BUF_LEN];
int i = 0;
char waste[200];

sprintf(temp_buffer,"%s.opt.tour",instance.name);
      TRACE ( printf("%s\n",temp_buffer); )
          opt_file = fopen(temp_buffer, "r");

  if ( opt_file == NULL ) {
       ancestor_ant->tour_length = INFTY;
    }
else {
    assert(opt_file != NULL);
    printf("\nreading otp-file %s ... \n\n", temp_buffer);
fscanf(opt_file, "%s", waste);
fscanf(opt_file, "%s", waste);
fscanf(opt_file, "%s", waste);
fscanf(opt_file, "%s", waste);
while (fscanf(opt_file, "%ld", ancestor_ant->tour[i]) != EOF) {
i++;
}
}
fclose(opt_file);
}


