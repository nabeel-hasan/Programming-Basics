#-------------------------------------- Pandas --------------------------------------#

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd


# Creating Pandas series
s = pd.Series([32, 43, 54, np.nan, 78])
s


# Creating a DataFrame
dates = pd.date_range('20200101', periods = 100)
df = pd.DataFrame(np.random.randn(100, 4), index = dates, columns = list('ABCD'))
df


# Importing a dataframe
df2 = pd.read_csv('/home/nabeel/Git/Programming-Basics/Python/ComputerSales.csv')
df2


# Datatypes of DF
df2.dtypes



# Viewing data
df2.head()
df2.tail(10)


# Display index and columns
df2.index
df2.columns

# converting Dataframe to numpy array
df2.to_numpy()


# statistical summary the dataframe
df2.describe()


# Transposing the DF
df2.T


# Sorting by index (Sorts by columns name)
df2.sort_index(axis = 1, ascending = False)


# sorting by column
df2.sort_values(by = 'Age')


# Selecting columns
df2['State']


# Selecting rows
df2[10:20]


# Selections using location
df2.loc[10:20, ['Contact', 'Age', 'Product Type']]


# Selection by Position
df2.iloc[10:20, 2:5]
df2.iloc[np.arange(0, 38, 3), [2,4,6,]]


# Boolean indexing
df2[df2['Sex'] == 'F']
df2[df2['Contact'].isin(['Doug Johnson', 'Ed Klondike'])]














